using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ClientNetPanelManager : MonoBehaviour
{
    public GameObject ClientItemPrefab;
    public Transform ClientContent;
    public GameObject NetConnectPanel;
    public TMP_InputField IpInputField;
    public Toggle ClientTog;

    /// <summary>
    /// 通过协程的方式实现等待服务端先连接成功后再连接
    /// </summary>
    /// <returns></returns>
    IEnumerator Start()
    {
        ClientNetworkManager.Instance.OnConnectResultAction += OnConnectResult;
        ClientNetworkManager.Instance.OnDisconnectAction += OnDisconnect;
        ClientHandlerCenter.Instance.OnGetClientListAction += RefreshClientList;

        yield return new WaitForSeconds(1);
        ClientNetworkManager.Instance.ConnectServer();
    }

    /// <summary>
    /// 更新客户端列表
    /// </summary>
    /// <param name="list"></param>
    private void RefreshClientList(List<ClientInfo> list)
    {
        //删掉已有的客户端信息
        for(int i = 0;i < ClientContent.childCount;i++)
        {
            Destroy(ClientContent.GetChild(i).gameObject);
        }
        //生成对应已连接的客户端
        for(int i = 0;i < list.Count;i++)
        {
            GameObject go = GameObject.Instantiate(ClientItemPrefab, ClientContent);
            go.GetComponent<CliemtItem>().SetValue(list[i].UserId, list[i].UserType, list[i].UserName, list[i].UserIP);
        }

        print("RefreshClientList : " + list.Count);
        LayoutRebuilder.ForceRebuildLayoutImmediate(ClientContent.GetComponent<RectTransform>());
    }

    /// <summary>
    /// 与服务器断开连接
    /// </summary>
    private void OnDisconnect()
    {
        //展示客户端IP输入界面
        IpInputField.text = ClientNetworkManager.Instance.IP;
        NetConnectPanel.SetActive(true);

        //清空客户端列表
        RefreshClientList(new List<ClientInfo>());
        ClientTog.isOn = false;
    }

    /// <summary>
    /// 与服务器连接
    /// </summary>
    /// <param name="obj"></param>
    private void OnConnectResult(bool result)
    {
        IpInputField.text = ClientNetworkManager.Instance.IP;
        NetConnectPanel.SetActive(!result);

        //连接成功后更新用户信息
        if(result)
        {
            SendDataManager.Instance.SendUpdateUserInfo();
            ClientTog.isOn = true;
        }
    }

    /// <summary>
    /// 点击连接按钮
    /// </summary>
    public void Connect()
    {
        if(string.IsNullOrEmpty(IpInputField.text))
        {
            print("请输入IP！");
        }
        else
        {
            ClientNetworkManager.Instance.IP = IpInputField.text;
            ClientNetworkManager.Instance.ConnectServer();
        }
    }

    public void ClientToggle(Toggle tog)
    {
        if(tog.isOn)
        {
            ClientNetworkManager.Instance.ConnectServer();
        }
        else
        {
            ClientNetworkManager.Instance.DisconnectServer();
        }
    }
}
