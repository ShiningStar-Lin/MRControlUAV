using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandlerBroadcastManager : MonoBehaviour
{
    void Start()
    {
        ClientHandlerCenter.Instance.OnHandlerBroadcastRequestAction += HandlerBroadcastRequest;
    }

    
    /// <summary>
    /// 客户端处理广播请求
    /// </summary>
    /// <param name="info"></param>
    private void HandlerBroadcastRequest(BroadcastInfo info)
    {
        switch((BroadcastType)info.Type)
        {
            case BroadcastType.UpdateTransform:
                UpdateTransform(info.Data);
                break;
            case BroadcastType.CreateAssetByID:
                CreateAssetByID(info.Data);
                break;
            case BroadcastType.RemoveAssetByID:
                RemoveAssetByID(info.Data);
                break;
            case BroadcastType.RemoveAllAsset:
                RemoveAllAsset();
                break;
            case BroadcastType.PlayAniNextByID:
                PlayAniNextByID(info.Data);
                break;
            case BroadcastType.PlayAniLastByID:
                PlayAniLastByID(info.Data);
                break;
            case BroadcastType.RequestCallibration:
                //接收到服务器校准请求
                ARManager.Instance.OnRequestCallibration(info);
                break;
            case BroadcastType.ConfirmCallibration:
                ARManager.Instance.OnComfirmCallibration(info.UserId);
                break;
            case BroadcastType.CallibrationData:
                ARManager.Instance.OnCallibrationData(info);
                break;
            case BroadcastType.StartHoloview:
                ARManager.Instance.OnStartHoloview(info);
                break;
            case BroadcastType.StopHoloview:
                ARManager.Instance.OnStopHoloview(info);
                break;
            case BroadcastType.HoloviewData:
                ARManager.Instance.OnHoloviewData(info);
                break;
            default:
                break;
        }
    }

    /// <summary>
    /// 创建指定ID资源
    /// </summary>
    /// <param name="data"></param>
    private void CreateAssetByID(byte[] data)
    {
        ARManager.Instance.CreateAssetByID(data);
        ShowMessageManager.Instance.ShowMessage("创建资源成功！");
    }

    /// <summary>
    /// 删除所有资源
    /// </summary>
    private void RemoveAllAsset()
    {
        for(int i = 0;i < UpdateTransformManager.Instance.TransformItemList.Count;i++)
        {
            Destroy(UpdateTransformManager.Instance.TransformItemList[i].gameObject);
        }
        UpdateTransformManager.Instance.TransformItemList.Clear();
        Resources.UnloadUnusedAssets();

        ShowMessageManager.Instance.ShowMessage("已删除所有资源");
    }

    /// <summary>
    /// 删除指定ID的资源
    /// </summary>
    /// <param name="data"></param>
    private void RemoveAssetByID(byte[] data)
    {
        long id = BitConverter.ToInt64(data, 0);
        UpdateTransform updateTransform = UpdateTransformManager.Instance.TransformItemList.Find((UpdateTransform t) =>
        {
            return t.UpdateID == id;
        });

        if (updateTransform != null) Destroy(updateTransform.gameObject);
        PlaySoundManager.Instance.StopBg();
        Resources.UnloadUnusedAssets();
    }

    /// <summary>
    /// 更新位置信息
    /// </summary>
    /// <param name="data"></param>
    private void UpdateTransform(byte[] data)
    {
        UpdateTransformManager.Instance.UpdateTransform(data);
    }

    /// <summary>
    /// 播放下个动画
    /// </summary>
    /// <param name="data"></param>
    private void PlayAniNextByID(byte[] data)
    {
        long id = BitConverter.ToInt64(data,0);
        UpdateTransform updateTransform = UpdateTransformManager.Instance.TransformItemList.Find((UpdateTransform t) =>
        {
            return t.UpdateID == id;
        });
        updateTransform.GetComponent<PlayAnimation>().PlayAniNext();
    }

    /// <summary>
    /// 播放上个动画
    /// </summary>
    /// <param name="data"></param>
    private void PlayAniLastByID(byte[] data)
    {
        long id = BitConverter.ToInt64(data, 0);
        UpdateTransform updateTransform = UpdateTransformManager.Instance.TransformItemList.Find((UpdateTransform t) =>
        {
            return t.UpdateID == id;
        });
        updateTransform.GetComponent<PlayAnimation>().PlayAniLast();
    }
}
