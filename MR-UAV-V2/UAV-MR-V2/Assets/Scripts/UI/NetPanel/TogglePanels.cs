using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TogglePanels : MonoBehaviour
{
    public List<Toggle> Toggles = new List<Toggle>();
    public List<GameObject> Panels = new List<GameObject>();

    private void Start()
    {
        OnToggelChange(-1);
    }

    /// <summary>
    /// 按钮与界面切换
    /// </summary>
    /// <param name="index"></param>
    public void OnToggelChange(int index)
    {
        for(int i = 0;i < Toggles.Count;i++)
        {
            if(Toggles[i].isOn && i == index)
            {
                Panels[i].SetActive(true);

                //对界面进行强制排布，防止界面元素一开始出现重合
                LayoutRebuilder.ForceRebuildLayoutImmediate(Panels[i].transform.GetComponent<RectTransform>());
            }
            else
            {
                Panels[i].SetActive(false);
            }
        }
    }
}
