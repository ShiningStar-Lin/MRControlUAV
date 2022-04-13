using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CliemtItem : MonoBehaviour
{
    public GameObject SubPanel;
    public int Type;
    public int Id;
    public TextMeshProUGUI NameText;
    public TextMeshProUGUI IpText;
    public Image TypeImage;
    public Sprite[] TypeSprites;

    RuntimePlatform platform;

    /// <summary>
    /// 已连接客户端的具体信息
    /// </summary>
    /// <param name="id"></param>
    /// <param name="type"></param>
    /// <param name="name"></param>
    /// <param name="ip"></param>
    public void SetValue(int id,int type,string name,string ip)
    {
        Id = id;
        Type = type;
        int spriteIndex = 0;
        platform = (RuntimePlatform)type;

        //判断所用的设备平台
        if(platform == RuntimePlatform.OSXEditor || platform == RuntimePlatform.WindowsEditor ||
            platform == RuntimePlatform.WindowsPlayer || platform == RuntimePlatform.OSXPlayer)
        {
            spriteIndex = 1;
        }
        else if(platform == RuntimePlatform.IPhonePlayer)
        {
            spriteIndex = 2;
        }
        else if(platform == RuntimePlatform.Android)
        {
            spriteIndex = 3;
        }
        else if(platform == RuntimePlatform.WSAPlayerX86)
        {
            spriteIndex = 4;
        }
        else if(platform == RuntimePlatform.WSAPlayerARM)
        {
            spriteIndex = 5;
        }

        //将文字图片赋予
        NameText.text = name;
        IpText.text = ip;
        TypeImage.sprite = TypeSprites[spriteIndex];
    }

    /// <summary>
    /// 点击展示与隐藏功能按钮
    /// </summary>
    public void OnClick()
    {
        //实现点击关闭与显示
        SubPanel.SetActive(!SubPanel.activeInHierarchy);
        //更新整个客户端列表
        LayoutRebuilder.ForceRebuildLayoutImmediate(transform.parent.GetComponent<RectTransform>());
    }

    /// <summary>
    /// 上传锚点
    /// </summary>
    public void UploadAnchor()
    {
        if(platform == RuntimePlatform.WSAPlayerARM || platform == RuntimePlatform.WSAPlayerX86)
        {
            ARManager.Instance.UpLoadAnchor();
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("请选择Hololens设备!");
        }

    }

    /// <summary>
    /// 下载锚点
    /// </summary>
    public void DownloadAnchor()
    {
        if (platform == RuntimePlatform.WSAPlayerARM || platform == RuntimePlatform.WSAPlayerX86)
        {
            ARManager.Instance.DownLoadAnchor();
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("请选择Hololens设备!");
        }
    }

    /// <summary>
    /// 校准客户端
    /// </summary>
    public void Callbration()
    {
        //如果申请校准客户端是服务器自己或者服务器未开启(客户端)则无权限
        if(Id == ClientNetworkManager.Instance.UserId || ServerNetworkManager.Instance == null ||
            !ServerNetworkManager.Instance.IsStartServer)
        {
            ShowMessageManager.Instance.ShowMessage("无权限!");
            return;
        }

        ShowMessageManager.Instance.ShowSelectBox("校准客户端?", () =>
        {
            ARManager.Instance.SendCallibrationRequest(Id);
        });
    }

    /// <summary>
    /// 开启Hololens视角
    /// </summary>
    public void StartHoloview()
    {
        //目标设备为Hololens才能生效
        if(platform == RuntimePlatform.WSAPlayerARM || platform == RuntimePlatform.WSAPlayerX86)
        {
            ShowMessageManager.Instance.ShowSelectBox("开启Hololen第一视角?", () =>
             {
                 ARManager.Instance.StartHoloView(Id);
             });
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("请选择Hololens设备!");
        }
    }

    /// <summary>
    ///更新列表位置
    /// </summary>
    private void OnEnable()
    {
        LayoutRebuilder.ForceRebuildLayoutImmediate(transform.GetComponent<RectTransform>());
    }
}
