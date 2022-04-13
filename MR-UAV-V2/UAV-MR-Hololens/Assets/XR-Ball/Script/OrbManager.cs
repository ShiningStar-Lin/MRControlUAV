using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace XR.Ball
{
    public class OrbManager : MonoBehaviour, IMixedRealityInputHandler
    {
        [Header("References")]

        [SerializeField]
        private Animator animator;

        [SerializeField]
        private Rigidbody rigiBody;

        [SerializeField]
        private MeshRenderer mesh;

        [SerializeField]
        private SolverHandler solverHandler;

        [Header("Power Up")]

        [SerializeField]
        private ParabolaPhysicalLineDataProvider parabolicLineData;

        [SerializeField]
        private float PowerUpMax = 1.15f;

        [SerializeField]
        private float PowerUpForceMultiplier = 3.0f;

        [Header("Events")]
        public UnityEvent OnFire = new UnityEvent();
        public UnityEvent OnRetrieve = new UnityEvent();

        public bool IsTracking => solverHandler.TransformTarget != null;

        private bool poweringUP = false;

        private bool IsPoweringUp
        {
            get => poweringUP;
            set
            {
                if(poweringUP != value)
                {
                    poweringUP = value;
                    PowerUpUpdate();
                }
            }
        }


        private enum OrbState
        {
            Idle,           //默认初始状态，不抬手
            SourceTracked,  //手握状态
            PhysicsTracked, //球体发射出去状态
        };

        private OrbState state = OrbState.Idle;
        private OrbState CurrentState
        {
            get => state;
            set
            {
                if(state != value)
                {
                    state = value;
                    OrbStateUpdate();
                }
            }
        }

        private float powerUpTimer;
        //力量大小
        private float powerUpForce => Mathf.Clamp(powerUpTimer, 0.0f, PowerUpMax) * PowerUpForceMultiplier;

        private float powerUp01 => Mathf.Clamp01(powerUpTimer / PowerUpMax);

        private IMixedRealityPointer trackedLinePointer;
        private Vector3 trackedPointerDirection =>
            trackedLinePointer != null ? trackedLinePointer.Rotation * Vector3.forward : Vector3.zero;

        private bool wasTracked = false;
        private IMixedRealityController trackedController;

        private void Awake()
        {
            Debug.Assert(animator != null);
            Debug.Assert(rigiBody != null);
            Debug.Assert(solverHandler != null);
            Debug.Assert(mesh != null);

            PowerUpUpdate();
            OrbStateUpdate();
        }

        /// <summary>
        /// 更新操作状态
        /// </summary>
        private void OrbStateUpdate()
        {
            IsPoweringUp = false;

            //当球体处于手握或者初始状态，启用解算器,使得球体跟踪手部射线
            solverHandler.UpdateSolvers = CurrentState != OrbState.PhysicsTracked;

            mesh.enabled = CurrentState != OrbState.Idle;   //隐藏球体

            //启用 isKinematic，力、碰撞或关节将不再影响刚体。通过更改 transform.position，刚体将受到动画或脚本的完全控制
            //当球体处于手握或者初始状态，启动isKinematic
            rigiBody.isKinematic = CurrentState != OrbState.PhysicsTracked;
        }

        /// <summary>
        /// 抬起状态更新
        /// </summary>
        private void PowerUpUpdate()
        {
            powerUpTimer = 0.0f;

            //是否展示球体动画
            animator.SetBool("PowerUp", poweringUP);
            animator.SetFloat("PowerUpSpeed", 1.0f / PowerUpMax);

            //是否展示球体弧线
            parabolicLineData.gameObject.SetActive(poweringUP);
        }

        private void OnEnable()
        {
            //启动MRTK的输入控制处理程序
            CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputHandler>(this);
        }

        private void OnDisable()
        {
            CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputHandler>(this);
        }

        private void Update()
        {
            bool isTracked = IsTracking;
            if(wasTracked != IsTracking)
            {
                trackedController = isTracked ? GetTrackedController(solverHandler.CurrentTrackedHandedness) : null;
                trackedLinePointer = isTracked ? GetLinePointer(trackedController) : null;
                wasTracked = isTracked;
            }

            if(isTracked)
            {
                if(CurrentState == OrbState.Idle)
                {
                    //切换为握球状态
                    CurrentState = OrbState.SourceTracked;
                }
                else if(CurrentState == OrbState.SourceTracked && IsPoweringUp) //开始发力
                {
                    powerUpTimer += Time.deltaTime;
                    UpdatePowerUpVisuals();
                }
            }
            else
            {
                //未检测到手部动作时切换为默认状态，隐藏球体
                CurrentState = OrbState.Idle;
            }
        }

        /// <summary>
        /// 抬起状态弧线状态更新
        /// </summary>
        private void UpdatePowerUpVisuals()
        {
            parabolicLineData.LineTransform.rotation = Quaternion.identity;
            parabolicLineData.Direction = trackedPointerDirection;

            float velocity = powerUpForce;
            //球体弧度变化
            parabolicLineData.Velocity = velocity;
        }

        /// <summary>
        /// 球体发射
        /// </summary>
        private void Fire()
        {
            if(trackedLinePointer != null)
            {
                var forceVec = trackedPointerDirection * powerUpForce;
                CurrentState = OrbState.PhysicsTracked;

                rigiBody.AddForce(forceVec, ForceMode.Impulse);
                OnFire?.Invoke();
            }
        }

        /// <summary>
        /// 获取射线指针
        /// </summary>
        /// <param name="controller"></param>
        /// <returns></returns>
        private IMixedRealityPointer GetLinePointer(IMixedRealityController controller)
        {
            foreach(var pointer in controller?.InputSource?.Pointers)
            {
                if(pointer is LinePointer linePointer)
                {
                    return linePointer;
                }
            }
            return null;
        }

        /// <summary>
        /// 获取使用中的MRTK控制器,判断是左手还是右手的控制器
        /// </summary>
        /// <param name="trackedHandedness"></param>
        /// <returns></returns>
        private IMixedRealityController GetTrackedController(Handedness trackedHandedness)
        {
            foreach (IMixedRealityController c in CoreServices.InputSystem?.DetectedControllers)
            {
                if(c.ControllerHandedness.IsMatch(trackedHandedness))
                {
                    return c;
                }
            }
            return null;
        }
        
        private bool IsTrackingSoure(uint soureceId)
        {
            return trackedController?.InputSource.SourceId == soureceId;
        }

        //-----负责检测输入，根据输入姿势状态来进行具体操作------
        #region IMixedRealityInputHandler implementation 
  
        /// <summary>
        /// 当输入检测到触击状态，并处于选择动作状态
        /// </summary>
        /// <param name="eventData"></param>
        public void OnInputDown(InputEventData eventData)
        {
            if (IsTrackingSoure(eventData.SourceId) &&
                eventData.MixedRealityInputAction.Description == "Select")
            {
                if(CurrentState == OrbState.SourceTracked)
                {
                    IsPoweringUp = true;
                    powerUpTimer = 0.0f;
                }
            }
        }

        /// <summary>
        /// 当输入检测到释放状态，并处于选择动作状态
        /// </summary>
        /// <param name="eventData"></param>
        public void OnInputUp(InputEventData eventData)
        {
            if(IsTrackingSoure(eventData.SourceId) &&
                eventData.MixedRealityInputAction.Description == "Select")
            {
                if (CurrentState == OrbState.SourceTracked)
                {
                    Fire();
                }
                else
                {
                    CurrentState = OrbState.PhysicsTracked;
                    OnRetrieve?.Invoke();
                }
            }
        }
        #endregion
    }
}

