using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace XR.Ball
{
    public class TargetManager : Singleton<TargetManager>
    {
        [SerializeField]
        private ObjectPool markerPool;

        [SerializeField]
        private ObjectPool ringPool;

        [SerializeField]
        private LayerMask layerMask;

        [Min(0.0f)]
        [SerializeField]
        private float MinSpawnThreshold = 3.0f;

        [SerializeField]
        private float MaxSpawnThreshold = 6.0f;

        [SerializeField]
        private float MinDistanceSpace = 0.25f;

        [SerializeField]
        private float SphereCastRadius = 0.2f;

        private const float MIN_RAYCAST_DISTANCE = 1f;
        private const float MAX_RAYCAST_DISTANCE = 10.0f;
        private const float HIT_OFFSET = 0.05f;

        private float markerTimer;
        private float markerTimeLimit;

        private float ringTimer;
        private float ringTimeLimit;

        private float minDistanceSpaceSqr;

        protected TargetManager() { }

        private void Awake()
        {
            //可自由设置判断条件
            Debug.Assert(MinSpawnThreshold < MaxSpawnThreshold, "MinSpawnThreshold is not less than MaxSpawnThreshold");

            //预制体间隔时间出现
            markerTimeLimit = Random.Range(MinSpawnThreshold, MaxSpawnThreshold);
            ringTimeLimit = Random.Range(MinSpawnThreshold, MaxSpawnThreshold);

            //预制体出现的间隔
            minDistanceSpaceSqr = MinDistanceSpace * MinDistanceSpace;
        }

        private void Update()
        {
            //计算存在时间
            markerTimer += Time.deltaTime;
            ringTimer += Time.deltaTime;

            if(markerTimer > markerTimeLimit)
            {
                markerTimer = 0.0f;
                PlaceMarker();
            }

            if(ringTimer > ringTimeLimit)
            {
                ringTimer = 0.0f;
                PlaceRing();
            }
        }

        /// <summary>
        /// 生成环状物
        /// </summary>
        private void PlaceRing()
        {
            if(ringPool.HasAvailable())
            {
                //mrtk主摄像头
                var cam = CameraCache.Main.transform;
                var direction = GenrateRandomDirection(cam);

                //对象是否与球体碰撞
                if(Physics.SphereCast(
                    cam.position,
                    SphereCastRadius,
                    direction,
                    out RaycastHit hit,
                    MAX_RAYCAST_DISTANCE,
                    layerMask))
                {
                    if(hit.distance > MIN_RAYCAST_DISTANCE)
                    {
                        var midPoint = (cam.position + hit.point) / 2.0f;

                        if(IsValidPlacement(midPoint))
                        {
                            PlaceTarget(ringPool.Request(),
                                        midPoint,
                                        Quaternion.LookRotation(direction));
                        }
                    }
                }
            }
        }

        /// <summary>
        /// 生成靶子
        /// </summary>
        private void PlaceMarker()
        {
            if (markerPool.HasAvailable())
            {
                var cam = CameraCache.Main.transform;
                var direction = GenrateRandomDirection(cam);

                if (Physics.Raycast(
                    cam.position,
                    direction,
                    out RaycastHit hit,
                    MAX_RAYCAST_DISTANCE,
                    layerMask))
                {
                    if (hit.distance > MIN_RAYCAST_DISTANCE)
                    {
                        var placementPoint = hit.point + hit.normal * HIT_OFFSET;

                        if (IsValidPlacement(placementPoint))
                        {
                            PlaceTarget(markerPool.Request(),
                                        placementPoint,
                                        Quaternion.LookRotation(hit.normal));
                        }
                    }
                }
            }
        }


        /// <summary>
        /// 放置具体对象
        /// </summary>
        /// <param name="item"></param>
        /// <param name="placementPoint"></param>
        /// <param name="rotation"></param>
        private void PlaceTarget(IObjectPoolItem item, Vector3 placementPoint, Quaternion rotation)
        {
            var targetObj = item.GetGameObject();
            targetObj.transform.position = placementPoint;
            targetObj.transform.rotation = rotation;

            var target = targetObj.GetComponentInChildren<Target>(true);
            if (target != null)
            {
                target.Lock();
            }

            var ringTarget = targetObj.GetComponentInChildren<RingTarget>(true);
            if (ringTarget != null)
            {
                ringTarget.Lock();
            }
        }

        /// <summary>
        /// 判断该区域是否可以放置对象(当这区域周围有其他对象存在时，不能放置）
        /// </summary>
        /// <param name="pos"></param>
        /// <returns></returns>
        private bool IsValidPlacement(Vector3 pos)
        {
            foreach(var target in markerPool.ActiveObjects)
            {
                if(WithinDistance(target.GetGameObject().transform.position,pos,minDistanceSpaceSqr))
                {
                    return false;
                }
            }

            foreach(var target in ringPool.ActiveObjects)
            {
                if (WithinDistance(target.GetGameObject().transform.position, pos, minDistanceSpaceSqr))
                {
                    return false;
                }
            }

            return true;
        }

        /// <summary>
        /// 判断已有的对象位置与待定位置是否很靠近
        /// </summary>
        /// <param name="p1"></param>
        /// <param name="p2"></param>
        /// <param name="sqrDistance"></param>
        /// <returns></returns>
        private static bool WithinDistance(Vector3 p1, Vector3 p2, float sqrDistance)
        {
            return (p1 - p2).sqrMagnitude < sqrDistance;
        }

        /// <summary>
        /// 获取主摄像机前面的随机方向
        /// </summary>
        /// <param name="cam"></param>
        /// <returns></returns>
        private static Vector3 GenrateRandomDirection(Transform transform)
        {
            var topDownForward = new Vector3(transform.forward.x, 0.0f, transform.forward.z);
            var topDownRight = new Vector3(transform.right.x, 0.0f, transform.right.z);

            //返回a与b之间以a为比例的值
            //(-1,0,1)与(1,0,1)两点之间取一点
            //t是夹在0到1之间。当t=0时，返回from。当t=1时，返回to。当t=0.5时放回from和to之间的平均数。
            var raycastDir = Vector3.Lerp(topDownForward - topDownRight, topDownForward + topDownRight,
                                            Random.Range(0.0f, 1.0f));
            //在取的点的基础上在上下点（0，1，0）与（0，-1，0）之间取一点，最终获取摄像头前方某点
            raycastDir = Vector3.Lerp(raycastDir - Vector3.up, raycastDir + Vector3.up, Random.Range(0.0f, 1.0f));

            return raycastDir;
        }

        
    }
}

