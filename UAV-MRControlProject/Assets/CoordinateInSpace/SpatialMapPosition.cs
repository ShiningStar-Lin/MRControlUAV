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
        //2����ȡ�ռ��֪���������
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
            spatialPosition = new Vector3(0,1,0);   //�߶ȹ̶�Ϊ1�������˻�һ�������߶�
        }

        public void ChangeSpeech()
        {
            isSpeech = true;
            Debug.Log("GetSpeech!");
        }
        /// <summary>
        /// ��ȡ�㼶����
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

        //2�����߼���ȡ������ռ��֪�������漸������λ��
        public Vector3? GetPositionOnSpatialMap(float maxDistance = 10)
        {
            //������̶�����
            /*RaycastHit hitInfo;
            var cameraTransform = Camera.main.transform;
            if (UnityEngine.Physics.Raycast(cameraTransform.position, cameraTransform.forward, out hitInfo, maxDistance, GetSpatialMeshMask()))
            {
                Debug.Log(hitInfo.point.ToString());
                return hitInfo.point;
            }*/

            //�ֲ�����
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
        /// HandPointHandle���¼�
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
        /// ��ȡ�ռ䶨λ�����
        /// </summary>
        /// <returns></returns>
        public Vector3 GetSpatialPosition()
        {
            //return HandRayEndPoint;
            return spatialPosition;
        }
    }
}
