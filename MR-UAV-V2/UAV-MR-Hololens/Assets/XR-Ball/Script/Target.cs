using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.WSA;

namespace XR.Ball
{
    public class Target : MonoBehaviour
    {
        [Header("References")]

        [SerializeField]
        private DefaultObjectPoolItem PoolItem;

        [SerializeField]
        private Animator SpinAnimator;

        [Header("LifeTime")]
        public bool AutoDestruct = true;
        public float LifeTime = 15.0f;

        [Header("Events")]
        public UnityEvent OnSpawn = new UnityEvent();
        public UnityEvent OnCapture = new UnityEvent();
        public UnityEvent OnRelease = new UnityEvent();

        protected bool active = false;
        private float timer = 0.0f;

        private const string SpinAnimatorTrigger = "Spin";
        private const string SpinOutAnimatorTrigger = "SpinOut";

        protected const uint DEFAULT_SCORE = 10;
        private WorldAnchor anchor = null;

        private void Awake()
        {
            Debug.Assert(SpinAnimator != null);
        }

        public void SpinStart()
        {
            if(!active)
            {
                PoolItem.Reset();
            }
        }

        /// <summary>
        /// 开启时播放动画
        /// </summary>
        /// <param name="inReverse"></param>
        public void PlayAnimation(bool inReverse = false)
        {
            SpinAnimator.SetTrigger(inReverse ? SpinOutAnimatorTrigger : SpinAnimatorTrigger);
        }

        /// <summary>
        /// 当此对象开启时
        /// </summary>
        protected virtual void OnEnable()
        {
            active = true;
            timer = 0.0f;

            PlayAnimation();
            OnSpawn?.Invoke();
        }

        /// <summary>
        /// 当此对象关闭不使用时
        /// </summary>
        protected virtual void OnDisable()
        {
            active = false;
            UnLock();
        }

        /// <summary>
        /// 锁定锚点
        /// </summary>
        public void Lock()
        {
            if(anchor == null)
            {
                anchor = transform.parent.gameObject.AddComponent<WorldAnchor>();
            }
        }

        /// <summary>
        /// 删除锚点
        /// </summary>
        public void UnLock()
        {
            if(anchor != null)
            {
                Destroy(anchor);
                anchor = null;
            }
        }

        protected virtual void Update()
        {
            if(active && AutoDestruct)
            {
                timer += Time.deltaTime;
                if(timer > LifeTime)
                {
                    Release();
                }
            }
        }

        /// <summary>
        /// 释放关闭对象
        /// </summary>
        protected virtual void Release()
        {
            active = false;
            PlayAnimation(true);
            OnRelease?.Invoke();
        }

        /// <summary>
        /// 当球体碰撞到靶子时
        /// </summary>
        /// <param name="collision"></param>
        private void OnCollisionEnter(Collision collision)
        {
            if(active)
            {
                ScoreManager.Instance.AddScore(DEFAULT_SCORE);
                OnCapture?.Invoke();
                Release();
            }
        }
    }
}
