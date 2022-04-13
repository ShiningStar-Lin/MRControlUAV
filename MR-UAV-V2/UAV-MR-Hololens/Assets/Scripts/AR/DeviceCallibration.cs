using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DeviceCallibration : MonoBehaviour
{
    public static DeviceCallibration Instance;

    public Vector2 DeviceSize;
    public InputField InputWidth;
    public InputField InputHeight;
    public Vector3 DeviceOffset;
    public InputField InputScreenHeight;
    public float ScreenHight;

    public Slider SliderOffsetX;
    public Slider SliderOffsetY;
    public Slider SliderOffsetZ;
    public GameObject Device;
    public GameObject DeviceCallibrationPanel;
    Transform arCam;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        if(PlayerPrefs.HasKey("DeviceSizeKey"))
        {
            string[] size = PlayerPrefs.GetString("DeviceSizeKey").Split('|');
            DeviceSize = new Vector2(float.Parse(size[0]), float.Parse(size[1]));
            InputWidth.text = DeviceSize.x.ToString();
            InputHeight.text = DeviceSize.y.ToString();
        }
        if(PlayerPrefs.HasKey("DeviceOffsetKey"))
        {
            string[] offset = PlayerPrefs.GetString("DeviceOffsetKey").Split('|');
            DeviceOffset = new Vector3(float.Parse(offset[0]), float.Parse(offset[1]), float.Parse(offset[2]));
            SliderOffsetX.value = DeviceOffset.x;
            SliderOffsetY.value = DeviceOffset.y;
            SliderOffsetZ.value = DeviceOffset.z;
        }

        if(PlayerPrefs.HasKey("ScreenHightKey"))
        {
            ScreenHight = PlayerPrefs.GetFloat("ScreenHightKey");
            InputScreenHeight.text = ScreenHight.ToString();
        }

        arCam = Camera.main.transform;
    }

    /// <summary>
    /// 获取输入的设备W宽度
    /// </summary>
    public void OnDeviceWidthInputChanged()
    {
        try
        {
            DeviceSize.x = float.Parse(InputWidth.text);
            Debug.Log("X ; " + DeviceSize.x);
        }
        catch (System.Exception)
        {
            ShowMessageManager.Instance.ShowMessage("请输入数字!");
        }
    }

    /// <summary>
    /// 获取输入的设备高度
    /// </summary>
    public void OnDeviceHeightInputChanged()
    {
        //判断输入的值是否为float
        try
        {
            DeviceSize.y = float.Parse(InputHeight.text);
        }
        catch (System.Exception)
        {
            ShowMessageManager.Instance.ShowMessage("请输入数字！");
        }
    }

    /// <summary>
    /// 获取输入的屏幕高度
    /// </summary>
    public void OnScreenHeightInputChanged()
    {
        //判断输入的值是否为float
        try
        {
            ScreenHight = float.Parse(InputScreenHeight.text);
            Debug.Log("screen ; " + ScreenHight);
        }
        catch (System.Exception)
        {
            ShowMessageManager.Instance.ShowMessage("请输入数字！");
        }
    }

    /// <summary>
    /// 展示生成的设备空间网格图，以便校准
    /// </summary>
    public void ShowDevice()
    {
        //输入值的单位为cm，而场景中单位为米
        Device.transform.localScale = new Vector3(0.01f * DeviceSize.x, 1, 0.01f * DeviceSize.y);
        Device.SetActive(true);

        GameObject go = new GameObject();
        go.transform.position = arCam.position;
        go.transform.rotation = arCam.rotation;

        Device.transform.SetParent(go.transform);
        Device.transform.localEulerAngles = new Vector3(-90, 0, 0);
        Device.transform.localPosition = 0.01f * DeviceOffset;
    }

    /// <summary>
    /// X方向滑条移动变化，设备网格跟随校准
    /// </summary>
    public void OnOffsetXSliderChanged()
    {
        DeviceOffset.x = SliderOffsetX.value;
        Device.transform.localPosition = 0.01f * DeviceOffset;
    }

    /// <summary>
    /// Y方向滑条移动变化，设备网格跟随校准
    /// </summary>
    public void OnOffsetYSliderChanged()
    {
        DeviceOffset.y = SliderOffsetY.value;
        Device.transform.localPosition = 0.01f * DeviceOffset;
    }

    /// <summary>
    /// Z方向滑条移动变化，设备网格跟随校准
    /// </summary>
    public void OnOffsetZSliderChanged()
    {
        DeviceOffset.z = SliderOffsetZ.value;
        Device.transform.localPosition = 0.01f * DeviceOffset;
    }

    /// <summary>
    /// 保存数据到本地
    /// </summary>
    public void Save()
    {
        PlayerPrefs.SetString("DeviceSizeKey", DeviceSize.x + "|" + DeviceSize.y);
        PlayerPrefs.SetString("DeviceOffsetKey", DeviceOffset.x + "|" + DeviceOffset.y + "|" + DeviceOffset.z);
        PlayerPrefs.SetFloat("ScreenHightKey", ScreenHight);
        PlayerPrefs.Save();
        ShowMessageManager.Instance.ShowMessage("已保存！");
    }

    /// <summary>
    /// 关闭校准界面
    /// </summary>
    public void Close()
    {
        Device.SetActive(false);
        DeviceCallibrationPanel.SetActive(false);
    }
}
