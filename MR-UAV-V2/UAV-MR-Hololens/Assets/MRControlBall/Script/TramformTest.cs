/*���ƣ�ȫϢ��ٿ�ģ��
�����ߣ��ֿ���
ʱ�䣺2021.9.14

���Ż��㣺��ȫϵ�ٿ���UI����
��ȫϢ���Իع�
��ȫϢ�����Ƶ�Ư������
 */
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tramform
{
    public class TramformTest : MonoBehaviour
    {
        public GameObject Peak;
        public GameObject CameraPoint;
        public GameObject Orginal;
        public GameObject Sphere;
        public GameObject mrControl;

        Vector3 Peaktrams;
        Vector3 CameraPointTrams;
        Vector3 UpAndDownTrams;
        Vector3 resetState;
        Vector3 DefaultVector3;

        private float angleX;
        public float maxRotX = 90.0f;
        private float angleZ;
        public float maxRotZ = 90.0f;
        private float moveY;

        //UAV����Ҫ������ݷ�Χ
        public float rangOfUAVMax_X = 0.8f;
        public float rangOfUAVMax_Y = 0.8f;
        public float rangOfUAVMax_Z = 0.8f;
        

        [SerializeField]
        private float incrementNum = 3.0f;  //������仯�����������
        [SerializeField]
        private float maxMoveUpAndDown;
        private bool isReset = true;
        [SerializeField]
        private bool isSafe = true;
        private float currentSpherePosY;
        private MoveTest moveTest;
        private float safeArea;
        private float power = 2.0f;

        // Start is called before the first frame update
        void Start()
        {
            Peaktrams = new Vector3();
            CameraPointTrams = new Vector3();
            UpAndDownTrams = new Vector3(0, 0, 0);
            resetState = new Vector3(0, 0, 0);

            moveTest = GameObject.Find("ControlBallManager").GetComponent<MoveTest>();

            DefaultVector3 = Orginal.transform.TransformVector(Peak.transform.position) - Orginal.transform.position;
            safeArea = DefaultVector3.y;
        }

        // Update is called once per frame
        void Update()
        {
            //��ȡ������������--���ٶ�
            Peaktrams = Orginal.transform.TransformVector(Peak.transform.position) - Orginal.transform.TransformVector(mrControl.transform.position);
            /*Debug.Log("First : " + Orginal.transform.TransformVector(Peak.transform.position).ToString("F8") +
                "Second : " + Orginal.transform.TransformVector(mrControl.transform.position).ToString("F8") +
                "Peaktrams : " + Peaktrams.ToString("F8"));*/

            //���������趨������ȫ���򣨴�����Yʼ��Ϊ0��
            if (moveTest.isChangeInControlBoll)
            {
                safeArea = Peaktrams.y * power; //������ȫ��Ϊ�ٿ���ֱ��

                //��������ȫϢ��������ƫ��
                incrementNum = rangOfUAVMax_Y / Peaktrams.y;

                maxMoveUpAndDown = safeArea * power;    //�����߶��޶�Ϊ2��������ȫ��
                moveTest.isChangeInControlBoll = false;
                Debug.Log("Update ControlBall Position Y!");
            }

            //��ȡ�������ת���������---����ͷ(������봥�������⣬���л�Ϊ˫�����߽�����ʽ��
            CameraPointTrams = Orginal.transform.TransformVector(CameraPoint.transform.position) -
                Orginal.transform.position;
            
            ClampAngle();
            ClampUpAndDown();
        }

        /// <summary>
        /// �޶�������������������ȫϢ��������Χ
        /// </summary>
        private void ClampUpAndDown()
        {
            moveY = Mathf.Clamp(Sphere.transform.localPosition.y, -maxMoveUpAndDown, maxMoveUpAndDown);
            UpAndDownTrams.y = moveY;
            Sphere.transform.localPosition = UpAndDownTrams;
            currentSpherePosY = Sphere.transform.localPosition.y;
            if ((currentSpherePosY > safeArea) || (currentSpherePosY < -safeArea))
            {
                isSafe = false;
            }
            else
            {
                isSafe = true;
            }
        }
        /// <summary>
        /// �޶���ת��������������ȫϢ�����ת��Χ
        /// </summary>
        private void ClampAngle()
        {
            if (Sphere.transform.localEulerAngles.x >= 270.0f)
            {
                angleX = Mathf.Clamp(Sphere.transform.localEulerAngles.x, 270.0f, 360.0f);
            }
            else
            {
                angleX = Mathf.Clamp(Sphere.transform.localEulerAngles.x, 0, maxRotX);
            }

            if (Sphere.transform.localEulerAngles.z > 270.0f)
            {
                angleZ = Mathf.Clamp(Sphere.transform.localEulerAngles.z, 270.0f, 360.0f);
            }
            else
            {
                angleZ = Mathf.Clamp(Sphere.transform.localEulerAngles.z, 0, maxRotZ);
            }

            Quaternion quaternion = Quaternion.Euler(angleX,
                Sphere.transform.localEulerAngles.y,
                angleZ);
            Sphere.transform.localRotation = quaternion;
        }

        /// <summary>
        /// ��λ���������ڲ�����Ϻ�ȫϢ��ع�ԭλ
        /// </summary>
        public void Reset()
        {
            Sphere.transform.localPosition = resetState;
            Sphere.transform.localEulerAngles = resetState;
            isReset = true;
        }

        public void ResetUnenable()
        {
            isReset = false;
        }

        /// <summary>
        /// ��ȡ���ٶ�X
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionX()
        {
            return Peaktrams.x * incrementNum;
        }

        /// <summary>
        /// ��ȡ���ٶ�Y
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionY()
        {
            if (!isSafe)
            {
                //������������ƫ�ư�ȫ������Χ������ƫ��Ӱ��
                if (currentSpherePosY > 0)
                {
                    return (currentSpherePosY - safeArea) / power * incrementNum;   
                }
                else
                {
                    return (currentSpherePosY + safeArea) / power * incrementNum;
                }
                
            }
            else
            {
                return 0.0f;
            }
        }

        /// <summary>
        /// ��ȡ���ٶ�Z
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionZ()
        {
            return Peaktrams.z * incrementNum;
        }
    }

}
