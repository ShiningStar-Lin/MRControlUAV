/*���ƣ�ȫϢ���л�ģ��
�����ߣ��ֿ���
ʱ�䣺2021.9.14

���ܣ�����Ĭ�ϵ�ȫϢ�ٿ��򣨿��ƶ����ţ��л�Ϊ͸���ٿ��򣨿ɿ��ƣ�
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

    //�л�ΪĬ��״̬
    public void ButtonControlOff()
    {
        sphereDefault.SetActive(true);
        sphereControl.SetActive(false);
        isChangeInControlBoll = false;
    }

    //�л�Ϊ�ɿ���״̬��͸���ٿ���
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

