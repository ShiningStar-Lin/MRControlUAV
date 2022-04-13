using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClientHandlerCenter : MonoBehaviour
{

    public static ClientHandlerCenter Instance;
    public Action<List<ClientInfo>> OnGetClientListAction;
    public Action<BroadcastInfo> OnHandlerBroadcastRequestAction; 
    private void Awake()
    {
        Instance = this;
    }

    void Update()
    {
        if (ClientNetworkManager.Instance.ReceiveDataQueue.Count > 0) 
        {
            byte[] data = ClientNetworkManager.Instance.ReceiveDataQueue.Dequeue();
            HandlerData(data);
        }
    }
    void HandlerData(byte[]data) 
    {
        DataModel model = DataCodec.Decode(data);

        switch (model.Type)
        {
            case DataType.TYPE_NONE:
                break;
            case DataType.TYPE_MR:
                HandlerMrRequest(model);
                break;
            case DataType.TYPE_BROADCAST:
                HandlerBroadcastRequest(model);
                break;

        }
    }
    void HandlerMrRequest(DataModel model)
    {
        switch (model.Request)
        {
            case DataRequest.MR_UPDATE_USERINFO:
                OnUpdateUserInfo(model);
                break;
            case DataRequest.MR_GET_CLIENTLIST:
                OnGetClientList(model);
                break;
            case DataRequest.MR_UPDATE_ANCHOR:
                OnUploadAnchor(model);
                break;
            case DataRequest.MR_DOWNLOAD_ANCHOR:
                OnDownloadAnchor(model);
                break;
            default:
                break;
        }

    }

    /// <summary>
    /// 更新用户信息后获取到用户id
    /// </summary>
    /// <param name="model"></param>
    private void OnUpdateUserInfo(DataModel model)
    {
        int id = BitConverter.ToInt32(model.Message, 0);
        ClientNetworkManager.Instance.UserId = id;
        print("OnUpdateUserInfo id:" + id);
    }

    /// <summary>
    /// 获取到客户端列表
    /// </summary>
    /// <param name="model"></param>
    private void OnGetClientList(DataModel model)
    {
        List<ClientInfo> list = MessageCodec.BytesToObject<List<ClientInfo>>(model.Message);
        print("list count:"+list.Count);
        for (int i = 0; i < list.Count; i++)
        {
            print("client id:"+list[i].UserId+ ",type:"+(RuntimePlatform)list[i].UserType+ ",ip"+list[i].UserIP);
        }
        OnGetClientListAction?.Invoke(list);
    }

    /// <summary>
    /// 上传锚点结果
    /// </summary>
    /// <param name="model"></param>
    private void OnUploadAnchor(DataModel model)
    {
        Result result = (Result)BitConverter.ToInt32(model.Message, 0);
        print("OnUploadAnchor result:" + result);
        ShowMessageManager.Instance.ShowMessage("上传锚点:" + result);
    }
    
    /// <summary>
    /// 下载锚点结果
    /// </summary>
    /// <param name="model"></param>
    private void OnDownloadAnchor(DataModel model)
    {
        if (model.Message.Length == 4)
        {
            Result result = (Result)BitConverter.ToInt32(model.Message, 0);
            print("OnDownloadAnchor result:" + result);
            ShowMessageManager.Instance.ShowMessage("锚点下载:"+ result);
        }
        else if(model.Message.Length > 4)
        {
            ShowMessageManager.Instance.ShowMessage("下载成功!");
            print("OnDownloadAnchor length:" + model.Message.Length);
            //处理获取的Anchor数据，导入锚点到指定对象上
            OnOnDownloadAnchorData?.Invoke(model.Message);
        }
    }
    public Action<byte[]> OnOnDownloadAnchorData;

    /// <summary>
    /// 处理服务器发来的广播请求
    /// </summary>
    /// <param name="model"></param>
    void HandlerBroadcastRequest(DataModel model)
    {
        BroadcastInfo info = MessageCodec.BytesToObject<BroadcastInfo>(model.Message);
        OnHandlerBroadcastRequestAction?.Invoke(info);
    }

}
