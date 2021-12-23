using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
namespace SpatialPoint
{
    public class SpatialMapPosition:MonoBehaviour
    {
        //2、获取空间感知网格层掩码
        private static int mPhysicsLayer = 0;
        Vector3 HandRayEndPoint;
        Vector3 spatialPosition;
        private bool isSpeech = false;
        
        void Update()
        {
            GetPositionOnSpatialMap();
        }
        void Start()
        {
            HandRayEndPoint = new Vector3();
            spatialPosition = new Vector3(0,1,0);   //高度固定为1，给无人机一个起升高度
        }

        public void ChangeSpeech()
        {
            isSpeech = true;
            Debug.Log("GetSpeech!");
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

            //手部射线
            if (PointerUtils.TryGetHandRayEndPoint(Handedness.Any, out HandRayEndPoint))
            {
                if (isSpeech)
                { 
                    Debug.Log(HandRayEndPoint.ToString());
                    spatialPosition = HandRayEndPoint;
                    isSpeech = false;
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
