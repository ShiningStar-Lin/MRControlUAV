﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;

public class UserToken
{
    public Socket Client;
    public bool IsUsing;
    public int UserId;
    public string UserName;
    public int UserType;
    public DateTime ConnectTime;
    public DateTime HeartTime;

    SocketServer server;
    AbsHandlerCenter handlerCenter;

    //客户端异步接收
    SocketAsyncEventArgs receiveSAEA;
    //接收数据缓存区
    List<byte> receiveBuffer = new List<byte>();

    //客户端异步发送
    Queue<SocketAsyncEventArgs> sendSAEAQueue;
    //数据发送缓存队列
    Queue<byte[]> sendBufferQueue = new Queue<byte[]>();

    public UserToken(SocketServer socketServer, AbsHandlerCenter handlerCenter)
    {
        server = socketServer;
        this.handlerCenter = handlerCenter;

        receiveSAEA = new SocketAsyncEventArgs();
        receiveSAEA.Completed += ReceiveSAEA_Completed;
        receiveSAEA.SetBuffer(new byte[10240], 0, 10240);
        receiveSAEA.UserToken = this;

        sendSAEAQueue = new Queue<SocketAsyncEventArgs>();
    }

    /// <summary>
    /// 异步接收数据完成的回调
    /// </summary>
    /// <param name="sender"></param>
    /// <param name="e"></param>
    private void ReceiveSAEA_Completed(object sender, SocketAsyncEventArgs e)
    {
        ProcessReceive(e);
    }

    /// <summary>
    /// 开始接收来自客户端的数据
    /// </summary>
    public void StartReceive()
    {
        if (Client == null) return;
        if(!Client.ReceiveAsync(receiveSAEA))
        {
            ProcessReceive(receiveSAEA);
        }
    }

    bool isReading;
    void ProcessReceive(SocketAsyncEventArgs e)
    {
        if(e.SocketError == SocketError.Success && e.BytesTransferred > 0)
        {
            byte[] data = new byte[e.BytesTransferred];
            Buffer.BlockCopy(e.Buffer, 0, data, 0, e.BytesTransferred);

            //处理接收到的数据
            HeartTime = DateTime.Now;
            receiveBuffer.AddRange(data);
            if(!isReading)
            {
                isReading = true;
                ReadData();
            }
            StartReceive();
        }
        else
        {
            server.CloseClient(this, e.SocketError.ToString());
        }
    }

    /// <summary>
    /// 读取缓存区数据
    /// </summary>
    void ReadData()
    {
        //分包、粘包（数据包=4个字节Int+实际数据包的长度）
        if (receiveBuffer.Count <= 4)
        {
            isReading = false;
            return;
        }

        byte[] lengthBytes = receiveBuffer.GetRange(0, 4).ToArray();
        int length = BitConverter.ToInt32(lengthBytes,0);

        if(receiveBuffer.Count - 4 < length)
        {
            isReading = false;
            return;
        }

        //数据已做解码处理，数据类型变成DataModel里的数据
        byte[] data = receiveBuffer.GetRange(4,length).ToArray();

        lock(receiveBuffer)
        {
            receiveBuffer.RemoveRange(0, 4 + length);
        }

        //将数据交到应用层去处理（消息处理中心）
        handlerCenter.MessageReceive(this, data);

        //递归继续读取数据
        ReadData();
    }

    bool isSending;
    /// <summary>
    /// 向客户端发送数据
    /// </summary>
    /// <param name="data"></param>
    public void Send(byte[] data)
    {
        if (Client == null) return;
        if (data == null) return;
        sendBufferQueue.Enqueue(data);
        if(!isSending)
        {
            isSending = true;
            HandlerSend();
        }
    }

    /// <summary>
    /// 处理数据发送
    /// </summary>
    void HandlerSend()
    {
        try
        {
            lock(sendBufferQueue)
            {
                if(sendBufferQueue.Count == 0)
                {
                    isSending = false;
                    return;
                }

                SocketAsyncEventArgs send = GetSendSAEA();
                if (send == null) return;

                byte[] data = sendBufferQueue.Dequeue();
                send.SetBuffer(data, 0, data.Length);

                if(!Client.SendAsync(send))
                {
                    ProcessSend(send);
                }
                HandlerSend();
            }
        }
        catch (Exception e)
        {
            Console.WriteLine("Send Error : " + e.Message);
        }
    }

    //已创建的发送异步对象数量
    int sendCount;
    /// <summary>
    /// 获取发送异步对象
    /// </summary>
    /// <returns></returns>
    SocketAsyncEventArgs GetSendSAEA()
    {
        if(sendSAEAQueue.Count == 0)
        {
            if (sendCount >= 100) return null;
            SocketAsyncEventArgs send = new SocketAsyncEventArgs();
            send.Completed += Send_Completed;
            send.UserToken = this;
            sendCount++;
            return send;
        }
        else
        {
            return sendSAEAQueue.Dequeue();
        }
    }

    /// <summary>
    /// 异步发送完成的回调
    /// </summary>
    /// <param name="sender"></param>
    /// <param name="e"></param>
    private void Send_Completed(object sender, SocketAsyncEventArgs e)
    {
        ProcessSend(e);
    }

    void ProcessSend(SocketAsyncEventArgs e)
    {
        if(e.SocketError == SocketError.Success)
        {
            sendSAEAQueue.Enqueue(e);
            HandlerSend();
        }
        else
        {
            //断开连接
            server.CloseClient(this, e.SocketError.ToString());
        }
    }

    public void Close()
    {
        IsUsing = false;
        sendBufferQueue.Clear();
        receiveBuffer.Clear();
        isReading = false;
        isSending = false;

        try
        {
            Client.Shutdown(SocketShutdown.Both);
            Client.Close();
            Client = null;
        }
        catch (Exception e)
        {
            Console.WriteLine("UserName:"+this.UserName+"userToken close error:" + e.Message);
        }

        /*receiveSAEA.Completed -= ReceiveSAEA_Completed;
        foreach(var item in sendSAEAQueue)
        {
            item.Completed -= Send_Completed;
        }*/
    }

}
