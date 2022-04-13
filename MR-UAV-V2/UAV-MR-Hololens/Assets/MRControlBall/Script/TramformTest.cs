/*名称：全息球操控模块
创建者：林俊辉
时间：2021.9.14

需优化点：①全系操控球UI美化
②全息球弹性回归
③全息球限制点漂移问题
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

        //UAV上送要求的数据范围
        public float rangOfUAVMax_X = 0.8f;
        public float rangOfUAVMax_Y = 0.8f;
        public float rangOfUAVMax_Z = 0.8f;
        

        [SerializeField]
        private float incrementNum = 3.0f;  //控制球变化后的数据增量
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
            //获取顶点的相对坐标--线速度
            Peaktrams = Orginal.transform.TransformVector(Peak.transform.position) - Orginal.transform.TransformVector(mrControl.transform.position);
            /*Debug.Log("First : " + Orginal.transform.TransformVector(Peak.transform.position).ToString("F8") +
                "Second : " + Orginal.transform.TransformVector(mrControl.transform.position).ToString("F8") +
                "Peaktrams : " + Peaktrams.ToString("F8"));*/

            //防抖动，设定升降安全区域（此区域Y始终为0）
            if (moveTest.isChangeInControlBoll)
            {
                safeArea = Peaktrams.y * power; //防抖安全区为操控球直径

                //补偿缩放全息球后的坐标偏差
                incrementNum = rangOfUAVMax_Y / Peaktrams.y;

                maxMoveUpAndDown = safeArea * power;    //升降高度限定为2倍防抖安全区
                moveTest.isChangeInControlBoll = false;
                Debug.Log("Update ControlBall Position Y!");
            }

            //获取横截面旋转的相对坐标---摄像头(如近距离触摸有问题，则切换为双手射线交互方式）
            CameraPointTrams = Orginal.transform.TransformVector(CameraPoint.transform.position) -
                Orginal.transform.position;
            
            ClampAngle();
            ClampUpAndDown();
        }

        /// <summary>
        /// 限定升降函数，用于限制全息球升降范围
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
        /// 限定旋转函数，用于限制全息球可旋转范围
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
        /// 归位函数，用于操作完毕后全息球回归原位
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
        /// 获取线速度X
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionX()
        {
            return Peaktrams.x * incrementNum;
        }

        /// <summary>
        /// 获取线速度Y
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionY()
        {
            if (!isSafe)
            {
                //顶点坐标向下偏移安全操作范围，消除偏移影响
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
        /// 获取线速度Z
        /// </summary>
        /// <returns></returns>
        public float GetLinearVelocityPositionZ()
        {
            return Peaktrams.z * incrementNum;
        }
    }

}
