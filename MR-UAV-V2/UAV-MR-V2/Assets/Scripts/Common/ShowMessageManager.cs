using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ShowMessageManager : MonoBehaviour
{
    public static ShowMessageManager Instance;

    public GameObject MessagePrefab;
    public Transform MessageLayout;
    public GameObject SelectBox;
    public TextMeshProUGUI WarnText;

    Action yesAction;
    Action noAction;
    private void Awake()
    {
        Instance = this;
    }

    /// <summary>
    /// 展示消息框
    /// </summary>
    /// <param name="mes"></param>
    /// <param name="time"></param>
    public void ShowMessage(string mes,float time = 2)
    {
        GameObject go = Instantiate(MessagePrefab, MessageLayout);
        go.SetActive(true);
        TextMeshProUGUI text = go.transform.Find("Text").GetComponent<TextMeshProUGUI>();
        text.text = mes;
        go.GetComponent<RectTransform>().sizeDelta = new Vector2(text.preferredWidth + 10, 50);
        Destroy(go, time);
    }

    /// <summary>
    /// 展示选择框
    /// </summary>
    /// <param name="warn"></param>
    /// <param name="yes"></param>
    /// <param name="no"></param>
    public void ShowSelectBox(string warn,Action yes,Action no = null)
    {
        SelectBox.SetActive(true);
        WarnText.text = warn;
        yesAction = yes;
        noAction = no;
    }

    /// <summary>
    /// 确定按钮
    /// </summary>
    public void Yes()
    {
        yesAction?.Invoke();
        WarnText.text = "";
        SelectBox.SetActive(false);
    }

    /// <summary>
    /// 取消按钮
    /// </summary>
    public void No()
    {
        noAction?.Invoke();
        WarnText.text = "";
        SelectBox.SetActive(false);
    }
}
