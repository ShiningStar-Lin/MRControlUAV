using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using DTUAVCARS.DTNetWork.SocketNetwork;
using Microsoft.MixedReality.Toolkit.UI;

namespace SpatialPoint
{
    public class SpatialMapPosition:MonoBehaviour
    {
        //2、获取空间感知网格层掩码
        private static int mPhysicsLayer = 0;
        Vector3 HandRayEndPoint;
        Vector3 spatialPosition;

        [SerializeField]
        private bool isChangePos = false;
        [SerializeField]
        private bool isStartFly = false;
        [SerializeField]
        private bool isFirstTimeFly = true;
        [SerializeField]
        private bool isPlanControlMode = false;
        [SerializeField]
        private bool isRayControlMode = true;
        [SerializeField]
        private bool isGoIntoCenter = false;

        public GameObject planObj;
        public GameObject coordinateCenter;
        private SocketClient3 socketClientData;
        private float offset = 5.0f;
        //private float offset = 1.47f;//坐标中心微调,人的眼镜高度
        void Update()
        {
            GetPositionOnSpatialMap();
        }
        void Start()
        {
            HandRayEndPoint = new Vector3();
            spatialPosition = new Vector3(0,1,0);   //高度固定为1，给无人机一个起升高度
            socketClientData = GameObject.Find("NetworkConnect").GetComponent<SocketClient3>();
        }

        public void ChangeSpeech()
        {
            isChangePos = true;
            Debug.Log("Get Change Position Speech!");
        }

        public void ChangeFlyStaSpeech()
        {
            isStartFly = true;
            Debug.Log("Get Start Fly Speech!");
        }
        
        public void GoIntoUAVCenterSpeech()
        {
            isGoIntoCenter = true;
            Debug.Log("Get Go Into Center Speech!");
        }

        public void AirPlaneObjectControlSpeech()
        {
            isPlanControlMode = true;
            isRayControlMode = false;
            planObj.SetActive(true);

            Destroy(coordinateCenter.GetComponent<ObjectManipulator>());
            Debug.Log("Get Plane Control Speech!");
        }

        public void RayControlModeSpeech()
        {
            isRayControlMode = true;
            isPlanControlMode = false;
            planObj.SetActive(false);

            Destroy(coordinateCenter.GetComponent<ObjectManipulator>());
            Debug.Log("Get Ray Control Speech!");
        }
        /// <summary>
        /// 获取层级掩码
        /// </summary>
        /// <returns></returns>
        private static int GetSpatialMeshMask()
        {
            if (mPhysicsLayer == 0)
            {
                var spatialMappingConfig = CoreServices.SpatialAwarenessSystem.ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
                if (spatialMappingConfig != null)
                {
                    foreach (var config in spatialMappingConfig.ObserverConfigurations)
                    {
                        var observerProfile = config.ObserverProfile as MixedRealitySpatialAwarenessMeshObserverProfile;
                        if (observerProfile != null)
                        {
                            mPhysicsLayer |= (1 << observerProfile.MeshPhysicsLayer);
                        }
                    }
                }
            }
            Debug.Log("mPhysicsLayer: " + mPhysicsLayer);
            return mPhysicsLayer;
        }

        //2、射线检测获取射线与空间感知场景表面几何网格位置
        public Vector3? GetPositionOnSpatialMap(float maxDistance = 10)
        {
            //摄像机固定射线
            /*RaycastHit hitInfo;
            var cameraTransform = Camera.main.transform;
            if (UnityEngine.Physics.Raycast(cameraTransform.position, cameraTransform.forward, out hitInfo, maxDistance, GetSpatialMeshMask()))
            {
                Debug.Log(hitInfo.point.ToString());
                return hitInfo.point;
            }*/

            if (isFirstTimeFly)
            {
                //对应无人机坐标
                spatialPosition.z = (float)socketClientData.recvData.position_x;
                spatialPosition.x = (float)socketClientData.recvData.position_y;
                spatialPosition.y = -50.0f;
                Debug.Log("X : " + spatialPosition.z.ToString() +
                        "Y : " + spatialPosition.x.ToString() +
                        "Z : " + spatialPosition.y.ToString());
                
            }
            
            if (isStartFly)
            {
                isFirstTimeFly = false;
                //对应无人机坐标
                spatialPosition.z = (float)socketClientData.recvData.position_x;
                spatialPosition.x = (float)socketClientData.recvData.position_y;
                spatialPosition.y = 1.0f;
                Debug.Log("X : " + spatialPosition.z.ToString() +
                        "Y : " + spatialPosition.x.ToString() +
                        "Z : " + spatialPosition.y.ToString());
                isStartFly = false;
            }
            
            if(isGoIntoCenter)
            {
                spatialPosition.z = 0;
                spatialPosition.x = 0;
                spatialPosition.y = 1.0f;
                isGoIntoCenter = false;
            }
            if(isRayControlMode)
            {
                //手部射线
                if (PointerUtils.TryGetHandRayEndPoint(Handedness.Any, out HandRayEndPoint) && 
                    isChangePos && !isFirstTimeFly)
                {
                    Debug.Log("X : " + HandRayEndPoint.z.ToString() +
                        "Y : " + HandRayEndPoint.x.ToString() +
                        "Z : " + HandRayEndPoint.y.ToString());
                    //spatialPosition = HandRayEndPoint;

                    //转换为无人机的坐标数据
                    spatialPosition.z = HandRayEndPoint.z - coordinateCenter.transform.position.z;
                    spatialPosition.x = -(HandRayEndPoint.x - coordinateCenter.transform.position.x);
                    spatialPosition.y = HandRayEndPoint.y - coordinateCenter.transform.position.y;

                    Debug.Log("spatialPositionX : " + spatialPosition.z.ToString() +
                        "spatialPositionY : " + spatialPosition.x.ToString() +
                        "spatialPositionZ : " + spatialPosition.y.ToString());

                    isChangePos = false;
                }
            }
            else if(isPlanControlMode)
            {
                if (isChangePos && !isFirstTimeFly)
                {
                    Debug.Log("X : " + planObj.transform.position.z.ToString() +
                        "Y : " + planObj.transform.position.x.ToString() +
                        "Z : " + planObj.transform.position.y.ToString());

                    //spatialPosition = planObj.transform.position;
                    //转换为无人机的坐标数据
                    spatialPosition.z = planObj.transform.localPosition.z/ offset;
                    spatialPosition.x = -planObj.transform.localPosition.x/ offset;
                    spatialPosition.y = planObj.transform.localPosition.y/ offset;

                    Debug.Log("spatialPositionX : " + spatialPosition.z.ToString() +
                        "spatialPositionY : " + spatialPosition.x.ToString() +
                        "spatialPositionZ : " + spatialPosition.y.ToString());

                    isChangePos = false;
                }
            }
            
            return null;
        }

        /// <summary>
        /// HandPointHandle的事件
        /// </summary>
        /// <param name="eventData"></param>
        public void GetPosition(MixedRealityPointerEventData eventData)
        {
            //GetPositionOnSpatialMap(10);
            var result = eventData.Pointer.Result;
            var spawnPosition = result.Details.Point;
            Debug.Log(spawnPosition.ToString());
        }
        
        /// <summary>
        /// 获取空间定位坐标点
        /// </summary>
        /// <returns></returns>
        public Vector3 GetSpatialPosition()
        {
            //return HandRayEndPoint;
            return spatialPosition;
        }
    }
}
