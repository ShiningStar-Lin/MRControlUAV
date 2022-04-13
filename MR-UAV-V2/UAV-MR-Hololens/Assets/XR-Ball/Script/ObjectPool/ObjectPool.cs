using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace XR.Ball
{
    public class ObjectPool : MonoBehaviour
    {
        //需创建的对象池的具体对象
        public GameObject Prefab;

        [SerializeField]
        private int objectPoolSize = 10;

        //对象池最大存储对象个数
        public int PoolSize
        {
            get => objectPoolSize;
        }

        //创建只读集合，定义该集合为只读，里面元素为IObjectPoolItem
        public IReadOnlyCollection<IObjectPoolItem> ActiveObjects
        {
            get => activeObjects;
        }

        public IReadOnlyCollection<IObjectPoolItem> AvailableObjects
        {
            get => availableObjects;
        }

        private HashSet<IObjectPoolItem> activeObjects = new HashSet<IObjectPoolItem>();
        private Queue<IObjectPoolItem> availableObjects = new Queue<IObjectPoolItem>();

        //判断是否有存在可使用的对象
        public bool HasAvailable()
        {
            return availableObjects.Count > 0;
        }

        private void Awake()
        {
            for(int i = 0;i < PoolSize;i++)
            {
                var gameObject = Instantiate(Prefab, transform);

                //IObjectPoolItem存储对象的专属信息
                var instance = gameObject.GetComponent<IObjectPoolItem>();
                if(instance != null)
                {
                    //将每个生成的对象绑定到此对象池当中
                    instance.RegisterPool(this);
                    availableObjects.Enqueue(instance);
                }
                else
                {
                    Debug.LogError($"{gameObject}does not implement required interface{typeof(IObjectPoolItem).Name}");
                    Destroy(gameObject);
                }
            }
        }

        /// <summary>
        /// 从池中获取可使用对象
        /// </summary>
        /// <returns></returns>
        public IObjectPoolItem Request()
        {
            if(!HasAvailable())
            {
                return null;
            }

            var result = availableObjects.Dequeue();
            result.OnRequest();

            activeObjects.Add(result);
            return result;
        }

        /// <summary>
        /// 回收对象，将对象放回对象池中
        /// </summary>
        /// <param name="returnObject"></param>
        public void RecycleObject(IObjectPoolItem returnObject)
        {
            if(activeObjects.Contains(returnObject))
            {
                activeObjects.Remove(returnObject);

                returnObject.OnRecycle();

                availableObjects.Enqueue(returnObject);
            }
        }
    }
}

