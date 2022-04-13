using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class AssetManipulate : MonoBehaviour
{
    float clickTime;
    GameObject lastRayHitObj;
    bool isSelect;

    public GameObject AssetManipulatePanel;
    public ToggleGroup AssetToggleGroup;
    public GameObject GroupSolve;

    public float DoubleClickTime = 1.0f;
    public float MoveSpeed = 1;
    public float MoveTouchSpeed = 1;

    public float RotateSpeed = 1;
    public float RotateTouchSpeed = 1;

    public float ScaleSpeed = 1;
    public float ScaleTouchSpeed = 1;

    public float MinScale = 0.1f;
    public float MaxScale = 20;

    public Slider MoveSlider;
    public Slider RotateSlider;
    public Slider ScaleSlider;

    string moveSliderKey = "moveSliderKey";
    string rotateSliderKey = "rotateSliderKey";
    string scaleSliderKey = "scaleSliderKey";

    private void Awake()
    {
        if(PlayerPrefs.HasKey(moveSliderKey))
        {
            MoveTouchSpeed = PlayerPrefs.GetFloat(moveSliderKey);
        }
        MoveSlider.value = MoveTouchSpeed;

        if(PlayerPrefs.HasKey(rotateSliderKey))
        {
            RotateTouchSpeed = PlayerPrefs.GetFloat(rotateSliderKey);
        }
        RotateSlider.value = RotateTouchSpeed;

        if(PlayerPrefs.HasKey(scaleSliderKey))
        {
            ScaleTouchSpeed = PlayerPrefs.GetFloat(scaleSliderKey);
        }
        ScaleSlider.value = ScaleTouchSpeed;
    }

    public LayerMask Layer;
    private void Update()
    {
        //双击点击选择对象
        if(!isSelect && Input.GetMouseButtonUp(0) && Input.touchCount <= 1)
        {
            RaycastHit hit;
            if(Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition),out hit,30,Layer))
            {
                if(lastRayHitObj != null && lastRayHitObj == hit.collider.gameObject &&
                    Time.time - clickTime < DoubleClickTime)
                {
                    UpdateTransform t = hit.collider.gameObject.GetComponent<UpdateTransform>();
                    if(t != null)
                    {
                        isSelect = true;
                        OnSelectAsset(t);
                    }
                }
                else
                {
                    lastRayHitObj = hit.collider.gameObject;
                }
                clickTime = Time.time;
            }
        }

        if(isSelect)
        {
            //判断是否点击在UI上
            //是根据UI上的Raycast Target的勾选来遍历，那些UI需要鼠标点击判断，那些不需要
            //防止选择模型后再进入UI界面，移动过程中同步对模型进行操作
            if (Input.touchCount > 0)
            {
                if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) return;
            }
            else
            {
                if (EventSystem.current.IsPointerOverGameObject()) return;
            }

            //水平移动
            if(currentTogIndex == 0)
            {
                if(Input.touchCount > 0) //触屏操作
                {
                    float x = Input.GetTouch(0).deltaPosition.x * MoveTouchSpeed * Time.deltaTime;
                    float y = Input.GetTouch(0).deltaPosition.y * MoveTouchSpeed * Time.deltaTime;

                    //转换为Unity空间坐标
                    Vector3 targetDirection = new Vector3(x, 0, y);
                    //根据摄像头的角度进行水平移动
                    targetDirection = Quaternion.Euler(0, Camera.main.transform.eulerAngles.y, 0) * targetDirection;
                    selectedUpdateTransform.transform.Translate(targetDirection,Space.World);
                }
                else
                {
                    if(Input.GetMouseButton(0))
                    {
                        float x = Input.GetAxis("Mouse X") * MoveSpeed * Time.deltaTime;
                        float y = Input.GetAxis("Mouse Y") * MoveSpeed * Time.deltaTime;

                        Vector3 targetDirection = new Vector3(x, 0, y);
                        targetDirection = Quaternion.Euler(0, Camera.main.transform.eulerAngles.y, 0) * targetDirection;
                        selectedUpdateTransform.transform.Translate(targetDirection, Space.World);
                    }
                }
            }
            else if(currentTogIndex == 1)   //上下移动
            {
                if(Input.touchCount > 0)
                {
                    float y = Input.GetTouch(0).deltaPosition.y * MoveTouchSpeed * Time.deltaTime;
                    selectedUpdateTransform.transform.position += new Vector3(0, y, 0);
                }
                else
                {
                    if(Input.GetMouseButton(0))
                    {
                        float y = Input.GetAxis("Mouse Y") * MoveSpeed * Time.deltaTime;
                        selectedUpdateTransform.transform.position += new Vector3(0, y, 0);
                    }
                }
            }
            else if(currentTogIndex == 2) //旋转
            {
                if(Input.touchCount > 0)
                {
                    float x = Input.GetTouch(0).deltaPosition.x * RotateTouchSpeed;
                    selectedUpdateTransform.transform.localEulerAngles -= new Vector3(0, x, 0);
                }
                else
                {
                    if(Input.GetMouseButton(0))
                    {
                        float x = Input.GetAxis("Mouse X") * RotateSpeed;
                        selectedUpdateTransform.transform.localEulerAngles -= new Vector3(0, x, 0);
                    }
                }
            }
            else if(currentTogIndex == 3) //缩放
            {
                if(Input.touchCount >= 2)
                {
                    if(Input.GetTouch(0).phase == TouchPhase.Moved || Input.GetTouch(1).phase == TouchPhase.Moved)
                    {
                        Vector3 pos1 = Input.GetTouch(0).position;
                        Vector3 pos2 = Input.GetTouch(1).position;
                        float s = IsEnLarge(lastPos1, lastPos2, pos1, pos2) ? 0.1f : -0.1f;
                        float scale = selectedUpdateTransform.transform.localScale.x + s * ScaleTouchSpeed;
                        selectedUpdateTransform.transform.localScale = Vector3.one * Mathf.Clamp(scale, MinScale, MaxScale);

                        lastPos1 = pos1;
                        lastPos2 = pos2;
                    }
                }
                else
                {
                    float s = Input.GetAxis("Mouse ScrollWheel") * ScaleSpeed * Time.deltaTime;
                    float scale = selectedUpdateTransform.transform.localScale.x + s;
                    selectedUpdateTransform.transform.localScale = Vector3.one * Mathf.Clamp(scale, MinScale, MaxScale);
                }
            }
            else if(currentTogIndex == 4)   //定位
            {
                
            }
        }
    }

    /// <summary>
    /// 判断是否缩放状态
    /// </summary>
    /// <param name="lastPos1"></param>
    /// <param name="lastPos2"></param>
    /// <param name="currentPos1"></param>
    /// <param name="currentPos2"></param>
    /// <returns></returns>
    Vector2 lastPos1, lastPos2;
    bool IsEnLarge(Vector2 lastPos1,Vector2 lastPos2,Vector2 currentPos1,Vector2 currentPos2)
    {
        float length1 = Vector2.Distance(lastPos1, lastPos2);
        float length2 = Vector2.Distance(currentPos1, currentPos2);
        return length2 > length1;
    }

    /// <summary>
    /// 选择操作对象
    /// </summary>
    /// <param name="t"></param>
    UpdateTransform selectedUpdateTransform;
    private void OnSelectAsset(UpdateTransform t)
    {
        selectedUpdateTransform = t;
        //增添外表高亮
        selectedUpdateTransform.gameObject.AddComponent<QuickOutline>();
        //显示操作面板
        AssetManipulatePanel.SetActive(true);
    }

    Collider rootCollider;
    /// <summary>
    /// 选择操作方式
    /// </summary>
    int currentTogIndex = -1;
    public void OnToggleSelect(Toggle tog)
    {
        if(tog.isOn)
        {
            currentTogIndex = int.Parse(tog.name);

            //进入分解操作时
            if (currentTogIndex == 5)
            {
                GroupSolve.SetActive(true);
                rootCollider = selectedUpdateTransform.GetComponent<Collider>();
                rootCollider.enabled = false;
                Destroy(selectedUpdateTransform.GetComponent<QuickOutline>());
                isSelect = false;
            }
        }
        else
        {
            //打开分解模型的第一个碰撞体，全局碰撞体
            if(rootCollider != null && currentTogIndex == 5)
            rootCollider.enabled = true;

            GroupSolve.SetActive(false);
            GroupSolve.GetComponent<Toggle>().isOn = false;
        }
    }

    /// <summary>
    /// 切换是否分解全局
    /// </summary>
    /// <param name="tog"></param>
    public void OnToggleGroupSelect(Toggle tog)
    {
        if(tog.isOn)
        {
            Destroy(selectedUpdateTransform.GetComponent<QuickOutline>());
            isSelect = false;
        }
    }

    /// <summary>
    /// 关闭
    /// </summary>
    public void Close()
    {
        AssetToggleGroup.SetAllTogglesOff();
        AssetManipulatePanel.SetActive(false);

        //删除高亮
        if (selectedUpdateTransform != null)
        {
            Destroy(selectedUpdateTransform.GetComponent<QuickOutline>());
        }

        selectedUpdateTransform = null;
        isSelect = false;
        currentTogIndex = -1;
    }

    /// <summary>
    /// 删除对象
    /// </summary>
    public void Delete()
    {
        if(selectedUpdateTransform != null)
        {
            ShowMessageManager.Instance.ShowSelectBox("是否删除此资源？", () =>
             {
                 AssetPanelManager.Instance.RemoveAssetByID(selectedUpdateTransform.UpdateID);
                 Close();
             });
        }
    }

    /// <summary>
    /// 播放下个动画
    /// </summary>
    public void PlayAniNext()
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.PlayAniNextByID;
        info.Data = BitConverter.GetBytes(selectedUpdateTransform.UpdateID);
        SendDataManager.Instance.SendBroadcastAll(info);
    }

    /// <summary>
    /// 播放上个动画
    /// </summary>
    public void PlayAniLast()
    {
        BroadcastInfo info = new BroadcastInfo();
        info.Type = (int)BroadcastType.PlayAniLastByID;
        info.Data = BitConverter.GetBytes(selectedUpdateTransform.UpdateID);
        SendDataManager.Instance.SendBroadcastAll(info);
    }

    /// <summary>
    /// 当移动灵敏度设置滑条移动时
    /// </summary>
    public void OnMoveSliderChanged()
    {
        MoveTouchSpeed = MoveSlider.value;
        PlayerPrefs.SetFloat(moveSliderKey, MoveTouchSpeed);
        PlayerPrefs.Save();
    }

    /// <summary>
    /// 当旋转灵敏度设置滑条移动时
    /// </summary>
    public void OnRotateSliderChanged()
    {
        RotateTouchSpeed = RotateSlider.value;
        PlayerPrefs.SetFloat(rotateSliderKey, RotateTouchSpeed);
        PlayerPrefs.Save();
    }

    /// <summary>
    /// 当缩放灵敏度设置滑条移动时
    /// </summary>
    public void OnScaleSliderChanged()
    {
        ScaleTouchSpeed = ScaleSlider.value;
        PlayerPrefs.SetFloat(scaleSliderKey, ScaleTouchSpeed);
        PlayerPrefs.Save();
    }
}
