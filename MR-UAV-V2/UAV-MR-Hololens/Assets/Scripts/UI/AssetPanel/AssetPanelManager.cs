using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml;
using UnityEngine;
using UnityEngine.UI;

public class AssetPanelManager : MonoBehaviour
{
    public static AssetPanelManager Instance;
    public GameObject AssetItemPrefab;
    public Transform Content;
    public Toggle AssetTog;
    public List<AssetInfo> AssetInfoList = new List<AssetInfo>();
    public Transform AnchorRoot;

    private void Awake()
    {
        Instance = this;
    }

    /// <summary>
    /// 加载AbXml里面的模型资源
    /// </summary>
    public void ReadLocalAbXml()
    {
        string fileName = AssetBundleManager.Instance.OssAbListXmlURL.Substring(AssetBundleManager.Instance.OssAbListXmlURL.LastIndexOf('/') + 1);
        if(!File.Exists(AssetBundleManager.Instance.LocalResPath + '/' + fileName))
        {
            print(fileName + "---文件不存在");
            return;
        }

        //读取Ablist文件
        XmlDocument xmlDoc = new XmlDocument();
        Stream stream;
        FileInfo info = new FileInfo(AssetBundleManager.Instance.LocalResPath + '/' + fileName);
        stream = info.OpenRead();
        xmlDoc.Load(stream);
        stream.Close();
        stream.Dispose();

        XmlElement rootNode = xmlDoc.DocumentElement;
        XmlNodeList list = rootNode.ChildNodes;
        AssetInfoList.Clear();

        foreach(XmlNode item in list)
        {
            XmlNodeList ab = item.ChildNodes;
            AssetInfo assetInfo = new AssetInfo();
            foreach(XmlNode item2 in ab)
            {
                if(item2.Name == "AbType")
                {
                    assetInfo.AbType = int.Parse(item2.InnerText);
                }
                else if(item2.Name == "AbID")
                {
                    assetInfo.AbId = int.Parse(item2.InnerText);
                }
                else if(item2.Name == "TitleName")
                {
                    assetInfo.TitleName = item2.InnerText;
                }
                else if(item2.Name == "Desc")
                {
                    assetInfo.DescName = item2.InnerText;
                }
                else if(item2.Name == "AbFileName")
                {
                    assetInfo.AbFileName = item2.InnerText;
                }
                else if(item2.Name == "ObjName")
                {
                    assetInfo.ObjName = item2.InnerText;
                }
                else if(item2.Name == "AbPicFileName")
                {
                    assetInfo.AbPicFileName = item2.InnerText;
                }
            }
            AssetInfoList.Add(assetInfo);
        }
        CreatAssetList(AssetInfoList);
    }

    /// <summary>
    /// 从Ab包中加载UI资源
    /// </summary>
    /// <param name="list"></param>
    private void CreatAssetList(List<AssetInfo> list)
    {
        //清空资源面板里面的内容
        for(int i = 0;i < Content.childCount;i++)
        {
            Destroy(Content.GetChild(i).gameObject);
        }

        //生成UI资源对象
        ToggleGroup group = Content.GetComponent<ToggleGroup>();
        for(int i = 0;i < list.Count;i++)
        {
            GameObject go = Instantiate(AssetItemPrefab, Content);
            go.GetComponent<Toggle>().group = group;
            go.GetComponent<AssetItem>().SetValue(list[i]);
        }
    }

    /// <summary>
    /// 获取对应AssetId的模型资源
    /// </summary>
    /// <param name="assetID"></param>
    /// <returns></returns>
    public GameObject GetAsset(int assetID)
    {
        AssetInfo asset = AssetInfoList.Find((AssetInfo info) => 
        {
            return info.AbId == assetID;
        });

        if(asset != null)
        {
            return AssetBundleManager.Instance.LoadAssetbundleFromFile(asset.AbFileName, asset.ObjName);
        }
        else
        {
            return null;
        }
    }

    /// <summary>
    /// 加载资源
    /// </summary>
    public void LoadAsset()
    {
        ToggleGroup group = Content.GetComponent<ToggleGroup>();
        if(group.AnyTogglesOn())
        {
            //获取对应资源信息
            AssetItem info = group.ActiveToggles().First().transform.GetComponent<AssetItem>();
            group.SetAllTogglesOff();

            Vector3 position = Camera.main.transform.position + Camera.main.transform.forward * 1.5f;
            Vector3 direction = Camera.main.transform.position - position;
            direction.y = 0;

            GameObject go = new GameObject();
            go.transform.SetParent(AnchorRoot);
            go.transform.position = position;
            //根据对局部坐标轴的描述, 构造对应的代表旋转程度的四元数
            go.transform.rotation = Quaternion.LookRotation(-direction);
            Destroy(go, 0.1f);

            //通知所有客户端加载该资源
            BroadcastInfo broadcastInfo = new BroadcastInfo();
            broadcastInfo.Type = (int)BroadcastType.CreateAssetByID;
            int assetID = info.AbId;
            long updateID = BitConverter.ToInt64(Guid.NewGuid().ToByteArray(), 0);

            byte[] data = new byte[36];
            Array.Copy(BitConverter.GetBytes(assetID), 0, data,0, 4);
            Array.Copy(BitConverter.GetBytes(updateID), 0, data, 4, 8);

            //传输相对坐标
            Array.Copy(BitConverter.GetBytes(go.transform.localPosition.x), 0, data, 12, 4);
            Array.Copy(BitConverter.GetBytes(go.transform.localPosition.y), 0, data, 16, 4);
            Array.Copy(BitConverter.GetBytes(go.transform.localPosition.z), 0, data, 20, 4);

            //传输相对欧拉角
            Array.Copy(BitConverter.GetBytes(go.transform.localEulerAngles.x), 0, data, 24, 4);
            Array.Copy(BitConverter.GetBytes(go.transform.localEulerAngles.y), 0, data, 28, 4);
            Array.Copy(BitConverter.GetBytes(go.transform.localEulerAngles.z), 0, data, 32, 4);

            broadcastInfo.Data = data;
            SendDataManager.Instance.SendBroadcastAll(broadcastInfo);
            AssetTog.isOn = false;
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("请选择一个资源");
        }
    }

    /// <summary>
    /// 删除所有资源
    /// </summary>
    public void RemoveAllAsset()
    {
        ShowMessageManager.Instance.ShowSelectBox("是否删除所有资源？", () =>
         {
             BroadcastInfo info = new BroadcastInfo();
             info.Type = (int)BroadcastType.RemoveAllAsset;
             SendDataManager.Instance.SendBroadcastAll(info);
             AssetTog.isOn = false;
         });
    }

    /// <summary>
    /// 删除指定ID的资源（使用的ID号为唯一ID）
    /// </summary>
    /// <param name="id"></param>
    public void RemoveAssetByID(long id)
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.RemoveAssetByID;
        info.Data = BitConverter.GetBytes(id);
        SendDataManager.Instance.SendBroadcastAll(info);
    }
}
