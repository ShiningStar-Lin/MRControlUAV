using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingPanel : MonoBehaviour
{
    public Toggle SettingTog;

    /// <summary>
    /// 当进入校准模式时
    /// </summary>
    public void OnCallibrationClick()
    {
        SettingTog.isOn = false;
    }
    
}
