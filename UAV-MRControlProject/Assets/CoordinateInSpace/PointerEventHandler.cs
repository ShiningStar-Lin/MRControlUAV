using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

namespace SpatialPoint
{
    public class PointerEventHandler : MonoBehaviour, IMixedRealityFocusHandler, IMixedRealityPointerHandler
    {
        SpatialMapPosition getMapPosition;
        public Vector3? hitPoint;
        public void Start()
        {
            getMapPosition = new SpatialMapPosition();
            hitPoint = new Vector3?();
        }
        private void Awake()
        {
        }
        void IMixedRealityFocusHandler.OnFocusEnter(FocusEventData eventData)
        {
        }
        void IMixedRealityFocusHandler.OnFocusExit(FocusEventData eventData)
        {
        }
        void IMixedRealityPointerHandler.OnPointerDown(MixedRealityPointerEventData eventData)
        { }
        void IMixedRealityPointerHandler.OnPointerUp(MixedRealityPointerEventData eventData)
        { }
        void IMixedRealityPointerHandler.OnPointerDragged(MixedRealityPointerEventData eventData)
        {
        }
        void IMixedRealityPointerHandler.OnPointerClicked(MixedRealityPointerEventData eventData)
        {
            hitPoint = getMapPosition.GetPositionOnSpatialMap(10);
            Debug.Log("Point: " + hitPoint);
        }
    }

}