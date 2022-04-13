using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace XR.Ball
{
    public class RingTarget : Target
    {
        private bool positiveSideStart;

        /// <summary>
        /// 当碰撞体触发了碰撞器
        /// </summary>
        /// <param name="other"></param>
        private void OnTriggerEnter(Collider other)
        {
            if(active)
            {
                //判断开始碰撞方向是否与物体正方向相一致（相一致）
                positiveSideStart = Vector3.Dot((other.transform.position - transform.position).normalized, transform.forward) > 0;
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if(active)
            {
                //判断结束碰撞方向是否与物体正方向相一致（不一致）
                bool positiveSideEnd = Vector3.Dot((other.transform.position - transform.position).normalized, transform.forward) > 0;

                //判断是否穿越环状物
                if(positiveSideStart != positiveSideEnd)
                {
                    //开始记分
                    ScoreManager.Instance.AddScore(2 * DEFAULT_SCORE);
                    OnCapture?.Invoke();
                    Release();
                }
            }
        }
    }
}

