using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR || UNITY_WSA
using UnityEngine.XR.WSA;
using UnityEngine.XR.WSA.Sharing;
#endif

public class HololensAnchorManager : MonoBehaviour
{
    public static HololensAnchorManager Instance;
    Action<byte[]> onFinishedExport;
    List<byte> anchorData = new List<byte>();
    GameObject objAttachAnchor;

    private void Awake()
    {
        Instance = this;
    }

#if UNITY_EDITOR || UNITY_WSA
    /// <summary>
    /// 导出锚点数据
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="onFinishedExport"></param>
    public void ExportAnchorData(GameObject obj,Action<byte[]> onFinishedExport)
    {
        if(Application.isEditor)
        {
            Debug.Log("非Hololens无法导出锚点!");
            return;
        }
        
        if(obj == null)
        {
            Debug.Log("导出锚点的对象不能为空!");
            return;
        }

        this.onFinishedExport = onFinishedExport;
        WorldAnchor anchor = obj.GetComponent<WorldAnchor>();
        if(anchor == null)
        {
            anchor = obj.AddComponent<WorldAnchor>();
        }

        WorldAnchorTransferBatch batch = new WorldAnchorTransferBatch();
        batch.AddWorldAnchor(obj.name, anchor);
        anchorData.Clear();

        //开始异步导出锚点
        WorldAnchorTransferBatch.ExportAsync(batch, onDataAvailable, onCompleted);
        Debug.Log("开始导出锚点：" + obj.name);
    }

    /// <summary>
    /// 导出锚点完成回调
    /// </summary>
    /// <param name="completionReason"></param>
    private void onCompleted(SerializationCompletionReason completionReason)
    {
        if(completionReason == SerializationCompletionReason.Succeeded)
        {
            onFinishedExport?.Invoke(anchorData.ToArray());
            Debug.Log("导出锚点数据成功!-----" + anchorData.Count);
            anchorData.Clear();
            onFinishedExport = null;
        }
        else
        {
            Debug.Log("导出锚点失败:" + completionReason);
            ShowMessageManager.Instance.ShowMessage("导出锚点失败:" + completionReason);
        }
    }

    /// <summary>
    /// 实时导出锚点数据函数
    /// </summary>
    /// <param name="data"></param>
    private void onDataAvailable(byte[] data)
    {
        anchorData.AddRange(data);
    }

    /// <summary>
    /// 导入锚点数据
    /// </summary>
    /// <param name="data"></param>
    /// <param name="obj"></param>
    public void ImportAnchorData(byte[] data,GameObject obj)
    {
        if(Application.isEditor)
        {
            Debug.Log("非Hololens设备无法导入锚点数据!");
            return;
        }
        if(obj == null)
        {
            Debug.Log("导入锚点的对象不能为空!");
            return;
        }

        objAttachAnchor = obj;
        WorldAnchorTransferBatch.ImportAsync(data, onComplete);
        Debug.Log("开始导入锚点:" + data.Length);
    }

    /// <summary>
    /// 导入锚点数据的回调
    /// </summary>
    /// <param name="completionReason"></param>
    /// <param name="deserializedTransferBatch"></param>
    private void onComplete(SerializationCompletionReason completionReason, WorldAnchorTransferBatch deserializedTransferBatch)
    {
        if (completionReason == SerializationCompletionReason.Succeeded)
        {
            string anchorName = deserializedTransferBatch.GetAllIds()[0];
            WorldAnchor anchor = objAttachAnchor.GetComponent<WorldAnchor>();
            if (anchor != null)
            {
                DestroyImmediate(anchor);
            }
            deserializedTransferBatch.LockObject(anchorName, objAttachAnchor);
            Debug.Log("导入锚点完成!");
        }
        else
        {
            Debug.Log("导入锚点失败:" + completionReason);
        }
        deserializedTransferBatch.Dispose();
    }
#else
    /// <summary>
    /// 导出锚点数据
    /// </summary>
    /// <param name="obj"></param>
    /// <param name="onFinishedExport"></param>
    public void ExportAnchorData(GameObject obj,Action<byte[]> onFinishedExport)
    {
    
    }

    /// <summary>
    /// 导入锚点数据
    /// </summary>
    /// <param name="data"></param>
    /// <param name="obj"></param>
    public void ImportAnchorData(byte[] data,GameObject obj)
    {
    
    }
#endif
}
