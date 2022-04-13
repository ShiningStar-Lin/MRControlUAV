using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;

public class HeartCheck
{
    SocketServer socketserver;
    int heartOutTime;
    Thread heardThread;
    
    public HeartCheck(SocketServer server,int time)
    {
        socketserver = server;
        heartOutTime = time;
        heardThread = new Thread(StartHeartThread);
        heardThread.Start();
    }

    /// <summary>
    /// 开启心跳检测线程
    /// </summary>
    void StartHeartThread()
    {
        while(heardThread.IsAlive)
        {
            List<UserToken> list = socketserver.GetUserTokenList();
            for(int i = 0;i < list.Count;i++)
            {
                if((DateTime.Now - list[i].HeartTime).TotalSeconds > heartOutTime)
                {
                    //关闭客户端
                    socketserver.CloseClient(list[i],"Heart Out Of Time!");
                }
            }
            Thread.Sleep(1000);
        }
    }

    /// <summary>
    /// 关闭心跳检测线程
    /// </summary>
    internal void Close()
    {
        heardThread.Abort();
    }
}
