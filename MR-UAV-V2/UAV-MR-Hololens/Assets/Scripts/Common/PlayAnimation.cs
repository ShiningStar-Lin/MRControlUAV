using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAnimation : MonoBehaviour
{
    Animator ani;
    public bool IsDancing;
    // Start is called before the first frame update
    void Start()
    {
        ani = transform.GetComponentInChildren<Animator>();
    }

    /// <summary>
    /// 播放下个动画
    /// </summary>
    public void PlayAniNext()
    {
        if(ani != null)
        {
            ani.SetTrigger("next");
            IsDancing = true;
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("此资源无动画！");
        }
    }

    /// <summary>
    /// 播放上一个动画
    /// </summary>
    public void PlayAniLast()
    {
        if(ani != null)
        {
            ani.SetTrigger("last");
            IsDancing = false;
        }
        else
        {
            ShowMessageManager.Instance.ShowMessage("此资源无动画！");
        }
    }
}
