using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;

public class SocketServer
{
    Socket server;

    //最大连接客户端数量
    int maxClient;
    //客户端对象池
    Queue<UserToken> userTokenPool;
    //当前连接的客户端列表
    List<UserToken> userTokenList = new List<UserToken>();

    //当前连接的客户端数量
    int count;
    //连接信号量
    Semaphore acceptClientSemaphore;
    //客户端userId索引值
    int userIdIndex;

    //消息处理中心
    AbsHandlerCenter handlerCenter;

    public SocketServer(AbsHandlerCenter center)
    {
        handlerCenter = center;
        server = new Socket(AddressFamily.InterNetwork,SocketType.Stream,ProtocolType.Tcp);
    }

    public List<UserToken> GetUserTokenList()
    {
        return userTokenList;
    }

    /// <summary>
    /// 启动服务器
    /// </summary>
    /// <param name="max"></param>
    /// <param name="port"></param>
    public void Start(int max,int port)
    {
        maxClient = max;
        acceptClientSemaphore = new Semaphore(maxClient, maxClient);

        userTokenPool = new Queue<UserToken>(maxClient);
        for (int i = 0;i < maxClient;i++)
        {
            UserToken token = new UserToken(this, handlerCenter);
            userTokenPool.Enqueue(token);
        }

        server.Bind(new IPEndPoint(IPAddress.Any,port));
        server.Listen(2);

        //开启异步连接客户端
        StartAccept(null);
    }

    public void Stop()
    {
        try
        {
            for(int i = 0;i < maxClient;i++)
            {
                userTokenList[i].Close();
            }
            userTokenList.Clear();
            userTokenPool.Clear();
            server.Close();
            server = null;
        }
        catch (Exception e)
        {
            Console.WriteLine("Stop Server error : " + e.Message);
        }
    }

    /// <summary>
    /// 开始异步接受客户端连接
    /// </summary>
    /// <param name="e"></param>
    void StartAccept(SocketAsyncEventArgs e)
    {
        if(e == null)
        {
            e = new SocketAsyncEventArgs();
            e.Completed += AcceptCompleted;
        }
        else
        {
            e.AcceptSocket = null;
        }

        //如果 I/O 操作挂起，则为 true。 操作完成时，将引发 e 参数的 Completed 事件。
        //如果 I/ O 操作同步完成，则为 false。 将不会引发 e 参数的 Completed 事件，
        //并且可能在方法调用返回后立即检查作为参数传递的 e 对象以检索操作的结果。
        if (!server.AcceptAsync(e))
        {
            ProcessAccept(e);
        }
    }

    /// <summary>
    /// 异步连接完成的回调
    /// </summary>
    /// <param name="sender"></param>
    /// <param name="e"></param>
    private void AcceptCompleted(object sender, SocketAsyncEventArgs e)
    {
        ProcessAccept(e);
    }

    /// <summary>
    /// 处理客户端连接
    /// </summary>
    /// <param name="e"></param>
    void ProcessAccept(SocketAsyncEventArgs e)
    {
        if (server == null) return;

        if(count >= maxClient)
        {
            Console.WriteLine("Accept Client is full,Waitting ....");
        }

        //信号量-1
        acceptClientSemaphore.WaitOne();
        //客户端数量+1
        Interlocked.Add(ref count,1);

        UserToken token = userTokenPool.Dequeue();
        token.IsUsing = true;
        token.Client = e.AcceptSocket;
        token.ConnectTime = DateTime.Now;
        token.HeartTime = DateTime.Now;
        token.UserId = userIdIndex++;
        token.UserName = "Temp : " + token.Client.RemoteEndPoint;

        userTokenList.Add(token);
        //通知消息处理中心客户端连接
        handlerCenter.ClientConnect(token);
        //开始接收客户端消息
        token.StartReceive();

        //继续异步连接客户端，对象重复使用
        StartAccept(e);
    }

    /// <summary>
    /// 客户端断开连接
    /// </summary>
    /// <param name="token"></param>
    /// <param name="error"></param>
    public void CloseClient(UserToken token,String error)
    {
        //无此客户端
        if (!token.IsUsing || token.Client == null) return;

        //通知消息处理中心有客户端断开连接
        handlerCenter.ClientClose(token, error);

        token.Close();
        userTokenList.Remove(token);

        //信号量+1
        acceptClientSemaphore.Release();
        userTokenPool.Enqueue(token);
        //客户端连接数-1
        Interlocked.Add(ref count, -1);
    }
}
