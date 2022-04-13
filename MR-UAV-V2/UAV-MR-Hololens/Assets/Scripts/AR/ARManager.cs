using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class ARManager : MonoBehaviour
{
    public static ARManager Instance;
    public Transform AnchorRoot;

    public VuforiaBehaviour Vuforia;
    public ImageTargetBehaviour ImageTarget_Callibration;
    public int ScanOutTime = 15;

    private void Awake()
    {
        Instance = this;
    }

//================================服务端=================================================
    /// <summary>
    /// 服务器发送对应客户端校准请求
    /// </summary>
    /// <param name="id"></param>
    public void SendCallibrationRequest(int id)
    {
    }

    /// <summary>
    /// 收到客户端的确认校准
    /// </summary>
    /// <param name="id"></param>
    public void OnComfirmCallibration(int id)
    {
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
            PlaySoundManager.Instance.PlayEffect("StartScan");
        });
    }

    /// <summary>
    /// 开启Vuforia图片识别，并检查识别库是否为预定识别图
    /// </summary>
    int serverClientId;
    void StartCallibration(BroadcastInfo info)
    {
        print("StratARCallibration");
        float height = BitConverter.ToSingle(info.Data, 0);
        serverClientId = info.UserId;

        if(height < 0.1f)
        {
            ShowMessageManager.Instance.ShowMessage("屏幕高度不正确!");
            return;
        }

        try
        {
            ImageTarget_Callibration.SetHeight(0.01f * height);
            Vuforia.enabled = true;
            Debug.Log("ImageTarget Size W : " + ImageTarget_Callibration.GetSize().x + " H : " +
                ImageTarget_Callibration.GetSize().y);
            StartCoroutine(CheckScan());
        }
        catch (Exception e)
        {
            Debug.LogError("StartCallibration error : " + e.Message);
        }
    }

    bool isScanning;
    /// <summary>
    /// 检查扫描时间
    /// </summary>
    /// <returns></returns>
    IEnumerator CheckScan()
    {
        isScanning = false;
        yield return new WaitForSeconds(2); //等待相机开启
        isScanning = true;
        yield return new WaitForSeconds(ScanOutTime);
        if(isScanning)
        {
            Debug.Log("扫描超时!");
            ShowMessageManager.Instance.ShowMessage("扫描超时!");
            StopScan();
        }
    }

    /// <summary>
    /// 停止扫描
    /// </summary>
    private void StopScan()
    {
        isScanning = false;
        Vuforia.enabled = false;
    }

    /// <summary>
    /// 当完成扫描
    /// </summary>
    /// <param name="targetName"></param>
    public void OnFinishedScan(string targetName)
    {
        if (!isScanning) return;
        if(targetName == "Calibration")
        {
            PlaySoundManager.Instance.PlayEffect("FinishScan");
            Debug.Log("扫描完成");
            trackedPos = ImageTarget_Callibration.transform.position;
            trackedRot = ImageTarget_Callibration.transform.rotation;
            StopScan();
            ConfirmCallibration();
        }
    }

    Vector3 trackedPos;
    Quaternion trackedRot;
    public GameObject CallibrationCube;
    /// <summary>
    /// 向服务端发送校准完成确认
    /// </summary>
    public void ConfirmCallibration()
    {
        GameObject go = GameObject.Instantiate(CallibrationCube);
        go.SetActive(true);
        go.transform.localScale = new Vector3(ImageTarget_Callibration.GetSize().x, 1,
                                    ImageTarget_Callibration.GetSize().y);
        go.transform.position = trackedPos;
        go.transform.rotation = trackedRot;
        Destroy(go, 10);

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
    public AxisFlags RotateAxisConstraint;
    public ObjectManipulator.RotateInOneHandType RotateInOneHandType;
    public float ScaleMax = 10;
    public float ScaleMin = 0.2f;
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

            //添加MRTK手势操作
            ObjectManipulator om = go.AddComponent<ObjectManipulator>();
            om.OneHandRotationModeFar = RotateInOneHandType;
            om.OneHandRotationModeNear = RotateInOneHandType;

            //旋转轴向约束
            RotationAxisConstraint rc = go.AddComponent<RotationAxisConstraint>();
            rc.ConstraintOnRotation = RotateAxisConstraint;

            //缩放约束
            MinMaxScaleConstraint scale = go.AddComponent<MinMaxScaleConstraint>();
            scale.ScaleMaximum = ScaleMax;
            scale.ScaleMinimum = ScaleMin;

            om.MoveLerpTime = UpdateTransformManager.Instance.UpdateTime;
            om.RotateLerpTime = UpdateTransformManager.Instance.UpdateTime; 
            om.ScaleLerpTime = UpdateTransformManager.Instance.UpdateTime;

            if (CanChildMove)
            {
                Transform[] children = go.transform.GetComponentsInChildren<Transform>(true);
                for(int i = 0;i < children.Length;i++)
                {
                    if(children[i].GetComponent<Collider>() != null)
                    {
                        children[i].gameObject.AddComponent<UpdateTransform>().UpdateID = updateID + i;
                        //添加MRTK手势操作
                        ObjectManipulator om2 = children[i].gameObject.AddComponent<ObjectManipulator>();
                        om2.OneHandRotationModeFar = RotateInOneHandType;
                        om2.OneHandRotationModeNear = RotateInOneHandType;

                        //旋转轴向约束
                        RotationAxisConstraint rc2 = children[i].gameObject.AddComponent<RotationAxisConstraint>();
                        rc2.ConstraintOnRotation = RotateAxisConstraint;

                        //缩放约束
                        MinMaxScaleConstraint scale2 = children[i].gameObject.AddComponent<MinMaxScaleConstraint>();
                        scale2.ScaleMaximum = ScaleMax;
                        scale2.ScaleMinimum = ScaleMin;

                        om2.MoveLerpTime = UpdateTransformManager.Instance.UpdateTime;
                        om2.RotateLerpTime = UpdateTransformManager.Instance.UpdateTime;
                        om2.ScaleLerpTime = UpdateTransformManager.Instance.UpdateTime;
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
    /// 客户端开启Hololens视角
    /// </summary>
    /// <param name="id"></param>
    internal void StartHoloView(int id)
    {
    }

    /// <summary>
    /// 客户端关闭Hololens视角
    /// </summary>
    public void StopHoloview()
    {
    }

    /// <summary>
    /// 客户端接收到Hololens视频数据
    /// </summary>
    /// <param name="info"></param>
    internal void OnHoloviewData(BroadcastInfo info)
    {
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
