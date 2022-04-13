using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace XR.Ball
{
    public class DefaultObjectPoolItem : MonoBehaviour, IObjectPoolItem
    {
        private ObjectPool myPool;
        public GameObject GetGameObject()
        {
            return gameObject;
        }

        /// <summary>
        /// 对象回收，放回对象池
        /// </summary>
        public void OnRecycle()
        {
            gameObject.SetActive(false);
        }

        /// <summary>
        /// 对象正在使用
        /// </summary>
        public void OnRequest()
        {
            gameObject.SetActive(true);
        }

        /// <summary>
        /// 将对象注册到对象池
        /// </summary>
        /// <param name="pool"></param>
        public void RegisterPool(ObjectPool pool)
        {
            myPool = pool;
        }

        public void Reset()
        {
            //刚开启的时候进行首先进行回收
            myPool.RecycleObject(this);
        }

        private void Awake()
        {
            //将此对象隐藏
            gameObject.SetActive(false);
        }
    }
}

