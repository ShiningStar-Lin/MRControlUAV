using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LCM;
using geometry_msgs;
using System.Threading;
using Pose = geometry_msgs.Pose;
using Quaternion = UnityEngine.Quaternion;
using Vector3 = UnityEngine.Vector3;
using lcm_iot_msgs;
using DTUAVCARS.DTNetwok.Message;

using SpatialPoint;
using Tramform;
using Reverse;

namespace DTUAVCARS.DTNetWork.Lcm.Publisher
{
    public class SocketTestCode : BasePub
    {
        private enum CurrentMode
        { 
            ControlBoll,
            MapControl,
            SpatialControl
        }

        // Start is called before the first frame update
        public int sleepTimeMS = 100; //线程休眠的时间，秒为单位
        private Thread pubThread;//发布消息的线程
        private bool isEnd;//线程是否结束
        private PoseStamp poseMsg;
       /* public Rigidbody RibObject;
        private Vector3 RibPosition;
        private Quaternion RibQuaternion;*/

        public TramformTest tramformTest;
        public ReverseGeocodeOnClick reverseGeocodeOnClick;
        public SpatialMapPosition spatialMapPosition;
        DateTime centuryBegin;
        DateTime currentDate;

        public float mode = (float)CurrentMode.ControlBoll;
        void Start()
        {
            centuryBegin = DateTime.Now;
            /* RibPosition = new Vector3(0, 0, 0);
             RibQuaternion = new Quaternion(0, 0, 0, 1);*/
            isEnd = false;
            poseMsg = new PoseStamp();
            poseMsg.position = new Point();
            poseMsg.orientation = new geometry_msgs.Quaternion();
            base.BaseStart();
            //sleepTimeS = (int)(1 / (base.MessagePubHz)) * 1000;
            pubThread = new Thread(PubData);
            pubThread.IsBackground = true;//线程才会随着主线程的退出而退出
            pubThread.Start();
        }

        void Update()
        {/*
            RibPosition = RibObject.position;
            RibQuaternion = RibObject.rotation;*/
        }
        void PubData()
        {
            while (!isEnd)
            {
                //DateTime centuryBegin = new DateTime(2021, 11, 9);
                currentDate = DateTime.Now;

                long elapsedTicks = currentDate.Ticks - centuryBegin.Ticks;
                TimeSpan elapsedSpan = new TimeSpan(elapsedTicks);
                CurrentPoseMessage cureCurrentPoseMessage = new CurrentPoseMessage();
                LcmIotMessage msg = new LcmIotMessage();
                msg.TargetID = 2;
                msg.SourceID = 101;
                msg.MessageID = 1;
                msg.TimeStamp = elapsedSpan.TotalMilliseconds;
                //msg.TimeStamp = elapsedSpan.TotalSeconds;
                cureCurrentPoseMessage.mode = mode;

                //Unity方向转换为无人机
                cureCurrentPoseMessage.LinearVelocityX = tramformTest.GetLinearVelocityPositionZ();
                cureCurrentPoseMessage.LinearVelocityY = -tramformTest.GetLinearVelocityPositionX();
                cureCurrentPoseMessage.LinearVelocityZ = tramformTest.GetLinearVelocityPositionY();

                cureCurrentPoseMessage.Latitude = reverseGeocodeOnClick.GetMapLatitude();
                cureCurrentPoseMessage.Longitude = reverseGeocodeOnClick.GetMapLongitude();
                cureCurrentPoseMessage.Altitude = 1.0f;

                cureCurrentPoseMessage.SpatialPositionX = spatialMapPosition.GetSpatialPosition().z;
                cureCurrentPoseMessage.SpatialPositionY = spatialMapPosition.GetSpatialPosition().x;
                cureCurrentPoseMessage.SpatialPositionZ = spatialMapPosition.GetSpatialPosition().y;

                msg.MessageData = JsonUtility.ToJson(cureCurrentPoseMessage);

                //展示上送给UAV的具体数据
                //Debug.Log("msg : "+ msg.MessageData);
                base.BaseLcm.Publish(base.MesageName, msg);
                System.Threading.Thread.Sleep(sleepTimeMS);
            }
        }

        void OnDestroy()
        {
            isEnd = true;
            if (pubThread != null)
            {
                if (pubThread.IsAlive)
                {
                    pubThread.Abort();
                }
            }
        }

        public void ChangeModeControlBall()
        { 
            mode = (float)CurrentMode.ControlBoll; 
        }
        public void ChangeModeControlMap()
        {
            mode = (float)CurrentMode.MapControl;
        }
        public void ChangeModeControSpatial()
        {
            mode = (float)CurrentMode.SpatialControl;
        }
    }
}