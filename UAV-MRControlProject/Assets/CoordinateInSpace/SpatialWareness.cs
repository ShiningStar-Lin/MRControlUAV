using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;

namespace SpatialPoint
{
    using SpatialAwarenessHandler = IMixedRealitySpatialAwarenessObservationHandler<SpatialAwarenessMeshObject>;
    public class SpatialWareness : MonoBehaviour, SpatialAwarenessHandler
    {
        IMixedRealitySpatialAwarenessMeshObserver meshObserver = null;

        private bool isRegisted = false;

        protected virtual void OnEnable()
        {
            RegisterEventHandlers();
        }

        protected virtual void OnDestroy()
        {
            UnregisterEventHandlers();
        }

        private void RegisterEventHandlers()
        {
            if (!isRegisted && (CoreServices.SpatialAwarenessSystem != null))
            {
                CoreServices.SpatialAwarenessSystem.RegisterHandler<SpatialAwarenessHandler>(this);
                isRegisted = true;
            }
        }

        private void UnregisterEventHandlers()
        {
            if (isRegisted && (CoreServices.SpatialAwarenessSystem != null))
            {
                CoreServices.SpatialAwarenessSystem.UnregisterHandler<SpatialAwarenessHandler>(this);
            }
        }

        /// <summary>
        /// Called when a spatial observer adds a new observation.
        /// </summary>
        /// <param name="eventData">Data describing the event.</param>
        public virtual void OnObservationAdded(MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> eventData)
        {
            //Debug.Log($"��������ID��{eventData.Id}");
        }

        /// <summary>
        /// Called when a spatial observer updates a previous observation.
        /// </summary>
        /// <param name="eventData">Data describing the event.</param>
        public virtual void OnObservationUpdated(MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> eventData)
        {
            //Debug.Log($"��������ID��{eventData.Id}");
        }

        /// <summary>
        /// Called when a spatial observer removes a previous observation.
        /// </summary>
        /// <param name="eventData">Data describing the event.</param>
        public virtual void OnObservationRemoved(MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> eventData)
        {
            //Debug.Log($"ɾ������ID��{eventData.Id}");
        }

        /// <summary>
        /// �ռ�ӳ������״̬���������ء������ڵ�\��ʾ
        /// </summary>
        public void HideSpatialMesh()
        {
            IMixedRealityDataProviderAccess dataProviderAccess = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
            if (dataProviderAccess != null)
            {
                IReadOnlyList<IMixedRealitySpatialAwarenessMeshObserver> observers = dataProviderAccess.GetDataProviders<IMixedRealitySpatialAwarenessMeshObserver>();
                foreach (IMixedRealitySpatialAwarenessMeshObserver observer in observers)
                {
                    //����
                    observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
                }
            }
        }

        public void ShowSpatialMesh()
        {
            IMixedRealityDataProviderAccess dataProviderAccess = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
            if (dataProviderAccess != null)
            {
                IReadOnlyList<IMixedRealitySpatialAwarenessMeshObserver> observers = dataProviderAccess.GetDataProviders<IMixedRealitySpatialAwarenessMeshObserver>();
                foreach (IMixedRealitySpatialAwarenessMeshObserver observer in observers)
                {
                    //��ʾ
                    observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
                }
            }
        }

        /// <summary>
        /// ʹ���Ƿ����ռ�ӳ�书��
        /// </summary>
        public void EnableSpatialAwareness()
        {
            //CoreServices.SpatialAwarenessSystem.Enable();
            CoreServices.SpatialAwarenessSystem.ResumeObservers();
        }

        public void DisableSpatialAwareness()
        {
            //CoreServices.SpatialAwarenessSystem.Disable();
            CoreServices.SpatialAwarenessSystem.SuspendObservers();
        }
    }
}

