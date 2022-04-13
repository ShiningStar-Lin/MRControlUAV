using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ServerNetPanelManager : MonoBehaviour
{
    public TextMeshProUGUI IpText;
    List<string> ipList = new List<string>();

    void Start()
    {
        GetIP();
        SwitchIp();

        //当客户端与服务端同时存在一个设备中时，将服务端IP设置为与服务端一致
        if (!ipList.Contains(ClientNetworkManager.Instance.IP))
        {
            ClientNetworkManager.Instance.IP = ipList[0];
        }
    }

    /// <summary>
    /// 服务器开启按钮
    /// </summary>
    /// <param name="tog"></param>
    public void ServerToggle(Toggle tog)
    {
        if(tog.isOn)
        {
            ServerNetworkManager.Instance.StartServer();
        }
        else
        {
            ServerNetworkManager.Instance.StopServer();
        }
    }

    int ipIndex;
    /// <summary>
    /// 切换展示IP号
    /// </summary>
    public void SwitchIp()
    {
        if(ipList.Count > 0)
        {
            if(ipIndex > ipList.Count - 1)
            {
                ipIndex = 0;
            }
            IpText.text = ipList[ipIndex];
            ipIndex++;
        }
        else
        {
            IpText.text = "NO IP";
        }
    }

    /// <summary>
    /// 获取服务器的IP号-匹配IPV4网络
    /// </summary>
    private void GetIP()
    {
        string hostName = Dns.GetHostName();
        IPHostEntry ipEntry = Dns.GetHostEntry(hostName);
        ipList.Clear();
        for(int i = 0;i < ipEntry.AddressList.Length;i++)
        {
            if(ipEntry.AddressList[i].AddressFamily == AddressFamily.InterNetwork)
            {
                ipList.Add(ipEntry.AddressList[i].ToString());
            }
        }
    }
}
