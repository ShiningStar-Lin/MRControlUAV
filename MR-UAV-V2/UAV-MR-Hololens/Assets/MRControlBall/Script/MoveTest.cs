/*名称：全息球切换模块
创建者：林俊辉
时间：2021.9.14

功能：将可默认的全息操控球（可移动缩放）切换为透明操控球（可控制）
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class MoveTest : MonoBehaviour
{
    private float defaultIncre = 1.6f;
    ObjectManipulator objectM;
    public GameObject sphereControl;
    public GameObject sphereDefault;
    public GameObject mrControlBall;

    [HideInInspector]
    public bool isChangeInControlBoll = false;
    //public GameObject airbome;
    // Start is called before the first frame update
    void Start()
    {
        objectM = this.GetComponent<ObjectManipulator>();
    }

    //切换为默认状态
    public void ButtonControlOff()
    {
        sphereDefault.SetActive(true);
        sphereControl.SetActive(false);
        isChangeInControlBoll = false;
    }

    //切换为可控制状态（透明操控球）
    public void ButtonControlOn()
    {
        sphereDefault.SetActive(false);
        sphereControl.SetActive(true);

        isChangeInControlBoll = true;

        mrControlBall.transform.localPosition = sphereDefault.transform.localPosition;
        mrControlBall.transform.localScale = sphereDefault.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

