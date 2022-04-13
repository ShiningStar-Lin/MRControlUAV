using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace XR.Ball
{
    public interface IObjectPoolItem
    {
        void OnRequest();

        void OnRecycle();

        void RegisterPool(ObjectPool pool);

        GameObject GetGameObject();
    }
}

