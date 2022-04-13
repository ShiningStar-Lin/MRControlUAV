using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SendDataManager : MonoBehaviour
{
    public static SendDataManager Instance;
    private void Awake()
    {
        Instance = this;
    }

    /// <summary>
    ///向服务器发送下载锚点数据请求
    /// </summary>
    public void SendDownloadAnchor()
    {
        DataModel model = new DataModel(DataType.TYPE_MR, DataRequest.MR_DOWNLOAD_ANCHOR);
        ClientNetworkManager.Instance.Send(model);
    }

    /// <summary>
    /// 向服务器发送上传锚点请求
    /// </summary>
    /// <param name="data"></param>
    public void SendUploadAnchor(byte[] data)
    {
        DataModel model = new DataModel(DataType.TYPE_MR, DataRequest.MR_UPDATE_ANCHOR, data);
        ClientNetworkManager.Instance.Send(model);
    }

    /// <summary>
    /// 向服务器发送广播全部请求
    /// </summary>
    /// <param name="info"></param>
    public void SendBroadcastAll(BroadcastInfo info)   
    {
        DataModel model = new DataModel(DataType.TYPE_BROADCAST,DataRequest.BROADCAST_ALL, MessageCodec.ObjectToBytes(info));
        ClientNetworkManager.Instance.Send(model);
    }

    /// <summary>
    /// 向服务器发送广播单个ID客户端
    /// </summary>
    /// <param name="info"></param>
    public void SendBroadcastById(BroadcastInfo info)
    {
        DataModel model = new DataModel(DataType.TYPE_BROADCAST, DataRequest.BROADCAST_BY_ID, MessageCodec.ObjectToBytes(info));
        ClientNetworkManager.Instance.Send(model);
    }

    /// <summary>
    /// 向服务器发送更新用户信息请求
    /// </summary>
    public void SendUpdateUserInfo() 
    {
        ClientInfo info = new ClientInfo();
        info.UserType = (int)Application.platform;
        info.UserName = SystemInfo.deviceName;
        byte[] data = MessageCodec.ObjectToBytes(info);
        DataModel model = new DataModel(DataType.TYPE_MR, DataRequest.MR_UPDATE_USERINFO, data);
        ClientNetworkManager.Instance.Send(model);
    }

    /// <summary>
    /// 向服务器发送获取客户端列表
    /// </summary>
    public void SendGetUserList() 
    {
        DataModel model = new DataModel(DataType.TYPE_MR, DataRequest.MR_GET_CLIENTLIST);
        ClientNetworkManager.Instance.Send(model);
    }
}
