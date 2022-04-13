using UnityEngine;

/// <summary>
/// 通用单例类
/// </summary>
/// <typeparam name="T"></typeparam>
public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    private static bool m_ShuttingDown = false;
    private static object m_Lock = new object();
    private static T m_Instance;

    /// <summary>
    /// 创建T类型单例
    /// </summary>
    public static T Instance
    {
        get
        {
            if(m_ShuttingDown)
            {
                Debug.LogWarning("[Sington] Instance :" + typeof(T) +
                    "is already destroyed.Returning null.");
                return null;
            }

            lock(m_Lock)
            {
                if(m_Instance == null)
                {
                    //在活跃的对象里面寻找T类型的脚本
                    m_Instance = (T)FindObjectOfType(typeof(T));

                    //若无活跃的对象脚本，则创建
                    if(m_Instance == null)
                    {
                        //需要创建一个空物体去挂载这个单例脚本
                        var singletonObject = new GameObject();
                        m_Instance = singletonObject.AddComponent<T>();
                        singletonObject.name = typeof(T).ToString() + "(singleton)";

                        //将此单例设为长期使用
                        DontDestroyOnLoad(singletonObject);
                    }
                }
                return m_Instance;
            }
        }
    }

    private void OnApplicationQuit()
    {
        m_ShuttingDown = true;
        print("OnApplicationQuit!");
    }

    private void OnDestroy()
    {
        m_ShuttingDown = true;
    }
}
