using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARManager : MonoBehaviour
{
    public static ARManager Instance;
    public ARTrackedImageManager TrackedImageManager;
    public Texture2D CallbrationTexture;

    public GameObject CallibrationPanel;
    public GameObject OnScanedPanel;
    public TextMeshProUGUI ARinfoText;

    public Transform AnchorRoot;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        TrackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
        TrackedImageManager.enabled = false;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

//================================服务端=================================================
    /// <summary>
    /// 服务器发送对应客户端校准请求
    /// </summary>
    /// <param name="id"></param>
    public void SendCallibrationRequest(int id)
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.RequestCallibration;
        info.UserId = ClientNetworkManager.Instance.UserId;
        info.PeerId = id;
        info.Data = BitConverter.GetBytes(DeviceCallibration.Instance.ScreenHight);
        SendDataManager.Instance.SendBroadcastById(info);

        //打开识别扫描图片界面
        CallibrationPanel.SetActive(true);
    }

    /// <summary>
    /// 收到客户端的确认校准
    /// </summary>
    /// <param name="id"></param>
    public void OnComfirmCallibration(int id)
    {
        CallibrationPanel.SetActive(false);
        ShowMessageManager.Instance.ShowMessage("校准成功！");

        //发送校准数据给客户端、获取设备屏幕数据（服务器设备应放在原来位置,上送经过校准的设备偏移量）
        GameObject go = new GameObject();
        go.transform.SetParent(Camera.main.transform);
        go.transform.localEulerAngles = new Vector3(-90, 0, 0);
        go.transform.localPosition = 0.01f * DeviceCallibration.Instance.DeviceOffset;

        //获取校准后的屏幕位置相对于AnchorRoot的相对位置和旋转
        go.transform.SetParent(AnchorRoot);
        Vector3 pos = go.transform.localPosition;
        Vector3 rot = go.transform.localEulerAngles;

        //发送pos\rot数据给客户端
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.CallibrationData;
        info.UserId = ClientNetworkManager.Instance.UserId;
        info.PeerId = id;

        List<byte> data = new List<byte>();
        data.AddRange(BitConverter.GetBytes(pos.x));
        data.AddRange(BitConverter.GetBytes(pos.y));
        data.AddRange(BitConverter.GetBytes(pos.z));
        data.AddRange(BitConverter.GetBytes(rot.x));
        data.AddRange(BitConverter.GetBytes(rot.y));
        data.AddRange(BitConverter.GetBytes(rot.z));
        info.Data = data.ToArray();

        Destroy(go, 1);

        SendDataManager.Instance.SendBroadcastById(info);
    }

    //================================客户端=================================================
    /// <summary>
    /// 客户端接收到服务器的校准请求
    /// </summary>
    /// <param name="info"></param>
    public void OnRequestCallibration(BroadcastInfo info)
    {
        ShowMessageManager.Instance.ShowSelectBox("开始扫描校准？", () =>
        {
            StartCallibration(info);
        });
    }

    /// <summary>
    /// 开启AR图片识别，并检查识别库是否为预定识别图
    /// </summary>
    int serverClientId;
    void StartCallibration(BroadcastInfo info)
    {
        print("StartARCallibration！");
        float height = BitConverter.ToSingle(info.Data, 0);
        serverClientId = info.UserId;

        TrackedImageManager.enabled = true;
        if(!CallbrationTexture.isReadable)
        {
            ShowMessageManager.Instance.ShowMessage("识别图不可读取！");
            return;
        }
        
        if(height < 0.1f)
        {
            ShowMessageManager.Instance.ShowMessage("屏幕高度不正确！");
            return;
        }

        try
        {
            //判断当前预设的识别图是否为目标识别图片/当前预设识别图有没有
            if(TrackedImageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary library)
            {
                if(TrackedImageManager.referenceLibrary.count <= 1 || 
                    TrackedImageManager.referenceLibrary[TrackedImageManager.referenceLibrary.count - 1].name != "Callibration")
                {
                    //替换成设置好的识别图，宽度对应屏幕高度
                    jobHandle = library.ScheduleAddImageJob(CallbrationTexture, "Callibration",
                                                0.01f * height * CallbrationTexture.width / CallbrationTexture.height);
                    Debug.Log("ScheduleAddImageJob Add!");
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError("ScheduleAddImageJob error:" + e.Message);
        }
    }

    /// <summary>
    /// 向服务端发送校准完成确认
    /// </summary>
    public void ConfirmCallibration()
    {
        TrackedImageManager.enabled = false;
        OnScanedPanel.SetActive(false);
        callibrationCube?.SetActive(false);

        //发消息给服务端获取服务端设备数据
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.ConfirmCallibration;
        info.UserId = ClientNetworkManager.Instance.UserId;
        info.PeerId = serverClientId;
        SendDataManager.Instance.SendBroadcastById(info);
    }

    /// <summary>
    /// 获取服务端发来的校准数据，定义世界坐标中心
    /// </summary>
    /// <param name="info"></param>
    public void OnCallibrationData(BroadcastInfo info)
    {
        float poxX = BitConverter.ToSingle(info.Data, 0);
        float poxY = BitConverter.ToSingle(info.Data, 4);
        float poxZ = BitConverter.ToSingle(info.Data, 8);

        float rotX = BitConverter.ToSingle(info.Data, 12);
        float rotY = BitConverter.ToSingle(info.Data, 16);
        float rotZ = BitConverter.ToSingle(info.Data, 20);

        //设置屏幕相对于AnchorRoot的位置
        GameObject screen = new GameObject();
        screen.transform.SetParent(AnchorRoot);
        screen.transform.localEulerAngles = new Vector3(rotX, rotY, rotZ);
        screen.transform.localPosition = new Vector3(poxX, poxY, poxZ);

        //设置屏幕位置到已识别的设备服务器位置上
        screen.transform.SetParent(null);
        AnchorRoot.transform.SetParent(screen.transform);
        screen.transform.rotation = trackedRot;
        screen.transform.position = trackedPos;

        AnchorRoot.transform.SetParent(null);

        Destroy(screen, 1);

        Debug.Log("校准完成！");
        ShowMessageManager.Instance.ShowMessage("校准完成！");
    }

    /// <summary>
    /// 客户端创建对应ID的资源
    /// </summary>
    public bool CanChildMove;
    public void CreateAssetByID(byte[] data)
    {
        int assetID = BitConverter.ToInt32(data, 0);
        long updateID = BitConverter.ToInt64(data, 4);

        float pox = BitConverter.ToSingle(data, 12);
        float poy = BitConverter.ToSingle(data, 16);
        float poz = BitConverter.ToSingle(data, 20);

        float rotx = BitConverter.ToSingle(data, 24);
        float roty = BitConverter.ToSingle(data, 28);
        float rotz = BitConverter.ToSingle(data, 32);

        //获取对应模型资源
        GameObject asset = AssetPanelManager.Instance.GetAsset(assetID);
        if(asset != null)
        {
            GameObject go = Instantiate(asset, AssetPanelManager.Instance.AnchorRoot);
            go.transform.localPosition = new Vector3(pox, poy, poz);
            go.transform.localEulerAngles = new Vector3(rotx, roty, rotz);//localRotation 是四元数

            //go.AddComponent<UpdateTransform>().UpdateID = updateID;
            go.AddComponent<PlayAnimation>();
            if(CanChildMove)
            {
                Transform[] children = go.transform.GetComponentsInChildren<Transform>(true);
                for(int i = 0;i < children.Length;i++)
                {
                    if(children[i].GetComponent<Collider>() != null)
                    {
                        children[i].gameObject.AddComponent<UpdateTransform>().UpdateID = updateID + i;
                    }
                }
            }

            print("CreateAssetByID : " + assetID);
        }
        else
        {
            print("不存在此资源 ：" + assetID);
        }
    }


    /// <summary>
    /// 识别物体后的回调
    /// </summary>
    /// <param name="obj"></param>
    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (var trackedImage in eventArgs.added)    //当新增识别对象
        {
            UpdateTracked(trackedImage);
        }
        foreach (var trackedImage in eventArgs.updated)  //更新已识别的识别对象
        {
            UpdateTracked(trackedImage);
        }
    }

    /// <summary>
    /// 识别更新识别图的位置及旋转信息
    /// </summary>
    JobHandle jobHandle;
    Vector3 trackedPos;
    Quaternion trackedRot;
    GameObject callibrationCube;
    private void UpdateTracked(ARTrackedImage trackedImage)
    {
        //将识别到的图片的长宽赋值给需展示的虚拟物体
        trackedImage.transform.localScale = new Vector3(trackedImage.size.x, 1, trackedImage.size.y);
        if (jobHandle.IsCompleted && trackedImage.trackingState != TrackingState.None &&
            trackedImage.referenceImage.name == "Callibration")
        {
            //显示当前坐标的界面信息
            OnScanedPanel.SetActive(true);
            //trackedImage.referenceImage.size代表这根据服务器设定屏幕高度而匹配的宽度的图片大小
            string str = "tracked state : " + trackedImage.trackingState + "add size : " +
                trackedImage.referenceImage.size * 100f + " , scan size : " + trackedImage.size * 100f;
            ARinfoText.text = str;

            //获取设备屏幕识别图的位置
            trackedPos = trackedImage.transform.position;
            trackedRot = trackedImage.transform.rotation;

            //生成定义好的虚拟识别物
            callibrationCube = trackedImage.transform.GetChild(0).gameObject;
            callibrationCube.SetActive(true);
        }
    }

    /// <summary>
    /// 当此管理器失效时
    /// </summary>
    private void OnDisable()
    {
        TrackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    public GameObject HoloviewPanel;
    public RawImage HoloviewImage;
    /// <summary>
    /// 客户端开启Hololens视角
    /// </summary>
    /// <param name="id"></param>
    internal void StartHoloView(int id)
    {
        //捕获目标hololens的视频
        serverClientId = id;
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.StartHoloview;
        info.UserId = ClientNetworkManager.Instance.UserId;
        info.PeerId = serverClientId;
        SendDataManager.Instance.SendBroadcastById(info);
        HoloviewPanel.SetActive(true);
    }

    /// <summary>
    /// 客户端关闭Hololens视角
    /// </summary>
    public void StopHoloview()
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.StopHoloview;
        info.UserId = ClientNetworkManager.Instance.UserId;
        info.PeerId = serverClientId;
        SendDataManager.Instance.SendBroadcastById(info);
        HoloviewPanel.SetActive(false);
    }

    /// <summary>
    /// 客户端接收到Hololens视频数据
    /// </summary>
    /// <param name="info"></param>
    internal void OnHoloviewData(BroadcastInfo info)
    {
        HoloCaptureManager.Instance.OnVideoDataReceive(info.Data);
        HoloviewImage.texture = HoloCaptureManager.Instance.VideoTexture;
    }

    //ARFoundation的射线平面碰撞检测
    public ARRaycastManager ARRaycastManager;
    List<ARRaycastHit> hitList = new List<ARRaycastHit>();
    //点击屏幕获取ARF的平面位置
    public bool GetARRayPosition(Vector2 screenPoint,out Vector3 hitPosition)
    {
        if(ARRaycastManager.Raycast(screenPoint,hitList,TrackableType.All))
        {
            hitPosition = hitList[0].pose.position;
            return true;
        }
        hitPosition = default;
        return false;
    }
    //==============================Hololens==========================================
    /// <summary>
    /// 下载锚点
    /// </summary>
    internal void DownLoadAnchor()
    {
        SendDataManager.Instance.SendDownloadAnchor();
        ClientHandlerCenter.Instance.OnOnDownloadAnchorData = OnDownloadAnchorData;
    }

    private void OnDownloadAnchorData(byte[] data)
    {
        HololensAnchorManager.Instance.ImportAnchorData(data, AnchorRoot.gameObject);
        ClientHandlerCenter.Instance.OnOnDownloadAnchorData = null;
    }

    /// <summary>
    /// 上传锚点
    /// </summary>
    internal void UpLoadAnchor()
    {
        HololensAnchorManager.Instance.ExportAnchorData(AnchorRoot.gameObject, SendDataManager.Instance.SendUploadAnchor);
    }

    /// <summary>
    /// Hololens端发送HoloLens捕获的视频
    /// </summary>
    /// <param name="imageBytes"></param>
    internal void SendHoloviewData(byte[] data)
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.HoloviewData;
        info.UserId = ClientNetworkManager.Instance.UserId;
        //info.PeerId = serverClientId;
        info.PeerId = HoloviewServerClientId;
        info.Data = data;
        SendDataManager.Instance.SendBroadcastById(info);
    }

    /// <summary>
    /// Hololens端接收到关闭视频捕获请求
    /// </summary>
    /// <param name="info"></param>
    internal void OnStopHoloview(BroadcastInfo info)
    {
        HoloCaptureManager.Instance.StopCapture();
    }

    /// <summary>
    /// Hololens端接收到开启视频捕获请求
    /// </summary>
    /// <param name="info"></param>
    int HoloviewServerClientId;//需发送视频数据给的目标客户端
    internal void OnStartHoloview(BroadcastInfo info)
    {
        HoloviewServerClientId = info.UserId;
        HoloCaptureManager.Instance.StartCapture();
    }

}
