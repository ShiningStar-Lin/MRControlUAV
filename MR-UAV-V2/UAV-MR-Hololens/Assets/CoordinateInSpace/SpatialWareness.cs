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
            //Debug.Log($"增加网格ID：{eventData.Id}");
        }

        /// <summary>
        /// Called when a spatial observer updates a previous observation.
        /// </summary>
        /// <param name="eventData">Data describing the event.</param>
        public virtual void OnObservationUpdated(MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> eventData)
        {
            //Debug.Log($"更新网格ID：{eventData.Id}");
        }

        /// <summary>
        /// Called when a spatial observer removes a previous observation.
        /// </summary>
        /// <param name="eventData">Data describing the event.</param>
        public virtual void OnObservationRemoved(MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> eventData)
        {
            //Debug.Log($"删除网格ID：{eventData.Id}");
        }

        /// <summary>
        /// 空间映射网格状态函数，隐藏、环境遮挡\显示
        /// </summary>
        public void HideSpatialMesh()
        {
            IMixedRealityDataProviderAccess dataProviderAccess = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
            if (dataProviderAccess != null)
            {
                IReadOnlyList<IMixedRealitySpatialAwarenessMeshObserver> observers = dataProviderAccess.GetDataProviders<IMixedRealitySpatialAwarenessMeshObserver>();
                foreach (IMixedRealitySpatialAwarenessMeshObserver observer in observers)
                {
                    //隐藏
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
                    //显示
                    observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
                }
            }
        }

        /// <summary>
        /// 使能是否开启空间映射功能
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

