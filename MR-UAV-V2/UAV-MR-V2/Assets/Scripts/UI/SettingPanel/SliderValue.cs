using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SliderValue : MonoBehaviour
{
    Slider slider;
    public TextMeshProUGUI ValueText;

    void Start()
    {
        slider = transform.GetComponent<Slider>();
        OnSliderChange(slider.value);
        //增加一个监听器，监听slider发生改变时调用
        slider.onValueChanged.AddListener(OnSliderChange);
    }

    /// <summary>
    /// Slider改变值时
    /// </summary>
    /// <param name="f"></param>
    private void OnSliderChange(float f)
    {
        if(ValueText != null)
        {
            ValueText.text = f.ToString("F2") ;
        }
    }
}
