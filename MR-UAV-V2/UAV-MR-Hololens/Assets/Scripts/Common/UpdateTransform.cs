using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateTransform : MonoBehaviour
{
    public long UpdateID;

    public Vector3 LastPosition;
    public Vector3 LastEulerAngles;
    public Vector3 LastScale;

    private void Start()
    {
        LastPosition = transform.localPosition;
        LastEulerAngles = transform.localEulerAngles;
        LastScale = transform.localScale;

        //增加此对象进入移动管理列表当中
        UpdateTransformManager.Instance.TransformItemList.Add(this);
    }

    private void OnDestroy()
    {
        UpdateTransformManager.Instance.TransformItemList.Remove(this);
    }

    /// <summary>
    /// 判断是否需要更新
    /// </summary>
    /// <returns></returns>
    public bool NeedUpdate()
    { 
        if(Vector3.Distance(LastPosition,transform.localPosition) > UpdateTransformManager.Instance.Threshold ||
            Mathf.Abs(transform.localEulerAngles.x - LastEulerAngles.x) > 0 ||
            Mathf.Abs(transform.localEulerAngles.y - LastEulerAngles.y) > 0 ||
            Mathf.Abs(transform.localEulerAngles.z - LastEulerAngles.z) > 0 ||
            Mathf.Abs(transform.localScale.x - LastScale.x) > 0 ||
            Mathf.Abs(transform.localScale.y - LastScale.y) > 0 ||
            Mathf.Abs(transform.localScale.z - LastScale.z) > 0)
        {
            LastPosition = transform.localPosition;
            LastEulerAngles = transform.localEulerAngles;
            LastScale = transform.localScale;
            return true;
        }
        else
        {
            return false;
        }
    }

    /// <summary>
    /// 更新模型当前状态信息
    /// </summary>
    /// <param name="px"></param>
    /// <param name="py"></param>
    /// <param name="pz"></param>
    /// <param name="rx"></param>
    /// <param name="ry"></param>
    /// <param name="rz"></param>
    /// <param name="sx"></param>
    /// <param name="sy"></param>
    /// <param name="sz"></param>
    public void UpdateData(float px,float py,float pz,float rx,float ry,float rz,float sx,float sy,float sz)
    {
        transform.localPosition = new Vector3(px, py, pz);
        transform.localEulerAngles = new Vector3(rx, ry, rz);
        transform.localScale = new Vector3(sx, sy, sz);

        LastPosition = transform.localPosition;
        LastEulerAngles = transform.localEulerAngles;
        LastScale = transform.localScale;
    }
}
