using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using UnityEngine;
using UnityEngine.Networking;

public class AssetBundleManager : MonoBehaviour
{
    public static AssetBundleManager Instance;

    //XML资源网址
    public string OssResXmlURL = "https://assetbundlelin.oss-cn-guangzhou.aliyuncs.com/ResourceSite.xml";
    public string OssAbListXmlURL = "";

    //AB包、缩略图资源网址
    public string OssAbPath;
    public string OssPicPath;

    //本地存放索引地址
    public string LocalResPath;             //根目录
    public string LocalAssetBundlePath;     //AB地址
    public string LocalPicPath;             //缩略图地址

    XmlDocument xmlDoc = new XmlDocument();

    private void Awake()
    {
        Instance = this;

        //判断是在场景当中还是运行设备当中
        if(Application.isEditor)
        {
            string path = Application.dataPath.Substring(0, Application.dataPath.LastIndexOf('/'));
            LocalResPath = path + "/MrRes";
            LocalAssetBundlePath = path + "/MrRes/AB";
            LocalPicPath = path + "/MrRes/Pics";
        }
        else
        {
            LocalResPath = Application.persistentDataPath + "/MrRes";
            LocalAssetBundlePath = Application.persistentDataPath + "/MrRes/AB";
            LocalPicPath = Application.persistentDataPath + "/MrRes/Pics";
        }

        //如不存在，则创建
        if (!Directory.Exists(LocalResPath)) Directory.CreateDirectory(LocalResPath);
        if (!Directory.Exists(LocalAssetBundlePath)) Directory.CreateDirectory(LocalAssetBundlePath);
        if (!Directory.Exists(LocalPicPath)) Directory.CreateDirectory(LocalPicPath);
    }

    private void Start()
    {
        //资源已更新
        //if (ARManager.Instance.UseLocalAsset) return;

        //检查网络是否连接
        if(Application.internetReachability == NetworkReachability.NotReachable)
        {
            //读取本地资源
            ReadLocalResXml();
            ReadLocalAbListXml();
        }
        else
        {
            //检查OSS资源更新
            StartCoroutine(CheckResUpdate());
        }
    }

    IEnumerator CheckResUpdate()
    {
        //利用HTTP通讯进行短连接，浏览网页
        UnityWebRequest www = new UnityWebRequest(OssResXmlURL);
        DownloadHandlerBuffer handler = new DownloadHandlerBuffer();
        www.downloadHandler = handler;
        www.timeout = 2;
        yield return www.SendWebRequest();

        if(!string.IsNullOrEmpty(www.error))
        {
            print("Download ResXml error + " + www.error);
            //读取本地资源
            ReadLocalResXml();
            ReadLocalAbListXml();
        }
        else
        {
            //保存最新的ResXml文件到本地
            string resXmlFileName = OssResXmlURL.Substring(OssResXmlURL.LastIndexOf('/') + 1);
            SaveFile(LocalResPath, resXmlFileName, www.downloadHandler.data);

            //读取ResXml
            ReadLocalResXml();

            //下载最新的AblistXml文件到本地
            www = new UnityWebRequest(OssAbListXmlURL);
            DownloadHandlerBuffer handler2 = new DownloadHandlerBuffer();
            www.downloadHandler = handler2;
            yield return www.SendWebRequest();

            if(!string.IsNullOrEmpty(www.error))
            {
                print("Download AblistXml error : " + www.error);
            }
            else
            {
                //保存最新的AblistXml文件到本地
                string abListXmlFileName = OssAbListXmlURL.Substring(OssAbListXmlURL.LastIndexOf('/') + 1);
                SaveFile(LocalResPath, abListXmlFileName, www.downloadHandler.data);
            }

            //读取AblistXml
            ReadLocalAbListXml();
        }
    }

    /// <summary>
    /// 保存文件资源(非大型模型）
    /// </summary>
    private void SaveFile(string path,string fileName,byte[] data)
    {
        if (!Directory.Exists(path)) Directory.CreateDirectory(path);

        //创建、写入、关闭文件，释放FileStream
        FileStream fileStream = new FileStream(path + '/' + fileName, FileMode.Create, FileAccess.Write);
        fileStream.Write(data, 0, data.Length);
        fileStream.Close();
        fileStream.Dispose();

        print(fileName + "----下载完成！");
    }

    /// <summary>
    /// 读取本地ResXml文件
    /// </summary>
    private void ReadLocalResXml()
    {
        string fileName = OssResXmlURL.Substring(OssResXmlURL.LastIndexOf('/') + 1);
        if(!File.Exists(LocalResPath + '/' + fileName))
        {
            print(fileName + "---本地文件不存在！");
            return;
        }

        //打开读取ResXml文件
        Stream stream;
        FileInfo info = new FileInfo(LocalResPath + '/' + fileName);
        stream = info.OpenRead();
        xmlDoc.Load(stream);
        stream.Close();
        stream.Dispose();

        //读取ResXml内容，获取对应网址
        XmlElement rootNode = xmlDoc.DocumentElement;
        XmlNodeList list = rootNode.ChildNodes;
        foreach(XmlNode item in list)
        {
            string platform = "";
            if(Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.WindowsPlayer)
            {
                platform = "Windows";
            }
            else if(Application.platform == RuntimePlatform.WSAPlayerARM || Application.platform == RuntimePlatform.WSAPlayerX86)
            {
                platform = "WSA";
            } 
            else if(Application.platform == RuntimePlatform.IPhonePlayer)
            {
                platform = "IOS";
            }
            else if (Application.platform == RuntimePlatform.Android)
            {
                platform = "Android";
            }

            XmlNodeList list2 = item.ChildNodes;
            if(list2.Item(0).InnerText == platform)
            {
                foreach(XmlNode item2 in list2)
                {
                    if(item2.Name == "AbPath")
                    {
                        OssAbPath = item2.InnerText;
                    }
                    else if(item2.Name == "PicPath")
                    {
                        OssPicPath = item2.InnerText;
                    }
                    else if(item2.Name == "ABList")
                    {
                        OssAbListXmlURL = item2.InnerText;
                    }
                }
            }
        }
    }

    /// <summary>
    /// 读取本地AblistXml文件
    /// </summary>
    private void ReadLocalAbListXml()
    {
        string fileName = OssAbListXmlURL.Substring(OssAbListXmlURL.LastIndexOf('/') + 1);
        if(!File.Exists(LocalResPath + '/' + fileName))
        {
            print(fileName + "-----本地文件不存在！");
            return;
        }

        Stream stream;
        FileInfo info = new FileInfo(LocalResPath + '/' + fileName);
        stream = info.OpenRead();
        xmlDoc.Load(stream);
        stream.Close();
        stream.Dispose();

        XmlElement rootNode = xmlDoc.DocumentElement;
        XmlNodeList list = rootNode.ChildNodes;
        foreach(XmlNode item in list)
        {
            XmlNodeList abList = item.ChildNodes;
            foreach(XmlNode ab in abList)
            {
                if(ab.Name == "AbFileName")
                {
                    if(!File.Exists(LocalAssetBundlePath + '/' + ab.InnerText))
                    {
                        StartCoroutine(DownLoadResource(OssAbPath + '/' + ab.InnerText, LocalAssetBundlePath));
                    }
                }
                else if (ab.Name == "AbPicFileName")
                {
                    if (!File.Exists(LocalPicPath + '/' + ab.InnerText))
                    {
                        StartCoroutine(DownLoadResource(OssPicPath + '/' + ab.InnerText, LocalPicPath));
                    }
                }
            }
        }
        print("资源下载完成!");
        AssetPanelManager.Instance.ReadLocalAbXml();
    }

    /// <summary>
    /// 下载ab包资源
    /// </summary>
    /// <param name="v"></param>
    /// <param name="localAssetBundlePath"></param>
    /// <returns></returns>
    IEnumerator DownLoadResource(string url, string savePath)
    {
        UnityWebRequest www = new UnityWebRequest(url);
        DownloadHandlerBuffer handler = new DownloadHandlerBuffer();
        www.downloadHandler = handler;
        yield return www.SendWebRequest();

        string fileName = url.Substring(url.LastIndexOf('/') + 1);
        if(!string.IsNullOrEmpty(www.error))
        {
            print(fileName + "downLoad error :" + www.error);
        }
        else
        {
            SaveFile(savePath, fileName, www.downloadHandler.data);
        }
    }

    /// <summary>
    /// 从本地加载AB包，生成模型
    /// </summary>
    /// <param name="abFileName"></param>
    /// <param name="objName"></param>
    /// <returns></returns>
    public GameObject LoadAssetbundleFromFile(string abFileName,string objName)
    {
        if(File.Exists(LocalAssetBundlePath + '/' + abFileName))
        {
            FileStream fileStream = new FileStream(LocalAssetBundlePath + '/' + abFileName, FileMode.Open, FileAccess.Read);
            byte[] data = new byte[fileStream.Length];
            fileStream.Read(data, 0, data.Length);

            AssetBundle ab = AssetBundle.LoadFromMemory(data);
            fileStream.Close();
            fileStream.Dispose();

            //加载ab包
            GameObject go = ab.LoadAsset<GameObject>(objName);
            ab.Unload(false);
            return go;
        }
        else
        {
            return null;
        }
    }
}
