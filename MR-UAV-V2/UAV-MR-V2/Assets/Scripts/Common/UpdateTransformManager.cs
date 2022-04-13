using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateTransformManager : MonoBehaviour
{
    public static UpdateTransformManager Instance;

    public List<UpdateTransform> TransformItemList = new List<UpdateTransform>();
    public float Threshold = 0.01f;
    public float UpdateTime = 0.05f;
    float lastTime;

    private void Awake()
    {
        Instance = this;
    }

    private void Update()
    {
        //Time.time为此帧开始的时间
        if (Time.time - lastTime < UpdateTime) return;
        lastTime = Time.time;

        List<byte> data = new List<byte>();
        for(int i = 0;i < TransformItemList.Count;i++)
        {
            if(TransformItemList[i].NeedUpdate())
            {
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].UpdateID));

                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastPosition.x));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastPosition.y));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastPosition.z));

                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastEulerAngles.x));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastEulerAngles.y));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastEulerAngles.z));

                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastScale.x));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastScale.y));
                data.AddRange(BitConverter.GetBytes(TransformItemList[i].LastScale.z));
            }
        }

        if(data.Count > 0)
        {
            BroadcastInfo info = new BroadcastInfo();
            info.Type = (int)BroadcastType.UpdateTransform;
            info.Data = data.ToArray();
            SendDataManager.Instance.SendBroadcastAll(info);
        }
    }

    /// <summary>
    /// 解析更新广播下来的需要更新的模型位置信息
    /// </summary>
    /// <param name="data"></param>
    public void UpdateTransform(byte[] data)
    {
        //解析判断有多少段数据
        int count = data.Length / 44;
        for(int i = 0;i < count;i++)
        {
            long UpdateID = BitConverter.ToInt64(data, i * 44);

            float px = BitConverter.ToSingle(data, 8 + i * 44);
            float py = BitConverter.ToSingle(data, 12 + i * 44);
            float pz = BitConverter.ToSingle(data, 16 + i * 44);

            float rx = BitConverter.ToSingle(data, 20 + i * 44);
            float ry = BitConverter.ToSingle(data, 24 + i * 44);
            float rz = BitConverter.ToSingle(data, 28 + i * 44);

            float sx = BitConverter.ToSingle(data, 32 + i * 44);
            float sy = BitConverter.ToSingle(data, 36 + i * 44);
            float sz = BitConverter.ToSingle(data, 40 + i * 44);

            //获得与此唯一ID相同的模型目标
            UpdateTransform ut = TransformItemList.Find((UpdateTransform t) =>
            {
                return t.UpdateID == UpdateID;
            });

            if(ut != null) ut.UpdateData(px,py,pz,rx,ry,rz,sx,sy,sz);
        }
    }
}
