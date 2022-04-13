﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

#if UNITY_EDITOR || UNITY_WSA
using HoloCapture;
#endif

public class HoloCaptureManager : MonoBehaviour
{
    public static HoloCaptureManager Instance;

    private void Awake()
    {
        Instance = this;
    }

    //Hololens刷新帧率
    public enum HoloCamFrame
    {
        Holo15,
        Holo30,
    }

    //Hololens分辨率
    public enum HoloResolution
    {
        Holo_896x504,
        Holo_1280x720,
    }

    public HoloResolution holoResolution;
    public HoloCamFrame holoFrame;
    HoloCapture.Resolution resolution;
    public bool EnableHolograms = true;

    [Range(0, 1)]
    public float Opacity = 0.9f;

    public Texture2D VideoTexture { get; set; }
    bool onVideoData = false;

    private void Start()
    {
        switch(holoResolution)
        {
            case HoloResolution.Holo_896x504:
                resolution = new HoloCapture.Resolution(896, 504);
                break;
            case HoloResolution.Holo_1280x720:
                resolution = new HoloCapture.Resolution(1280, 720);
                break;
            default:
                break;
        }

        int frame;
        switch(holoFrame)
        {
            case HoloCamFrame.Holo15:
                frame = 15;
                break;
            case HoloCamFrame.Holo30:
                frame = 30;
                break;
            default:
                frame = 15;
                break;
        }

        VideoTexture = new Texture2D(resolution.width, resolution.height, TextureFormat.BGRA32, false);

#if UNITY_WSA || UNITY_EDITOR
        HoloCaptureHelper.Instance.Init(resolution,frame, true, EnableHolograms, Opacity, false,
            UnityEngine.XR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr(),OnFrameSampleCallback);
#endif
    }
#if UNITY_WSA || UNITY_EDITOR

    private void OnDestroy()
    {
        HoloCaptureHelper.Instance.Destroy();
    }

    /// <summary>
    /// 开启视频捕获
    /// </summary>
    bool isStartCapture;
    
    public void StartCapture()
    {
        if (isStartCapture) return;
        isStartCapture = true;
        HoloCaptureHelper.Instance.StartCapture();
    }

    /// <summary>
    /// 停止视频捕获
    /// </summary>
    public void StopCapture()
    {
        if (!isStartCapture) return;
        isStartCapture = false;
        HoloCaptureHelper.Instance.StopCapture();
    }

    void OnFrameSampleCallback(VideoCaptureSample sample)
    {

        byte[] imageBytes = new byte[sample.dataLength];

        sample.CopyRawImageDataIntoBuffer(imageBytes);

        sample.Dispose();

        UnityEngine.WSA.Application.InvokeOnAppThread(() =>
        {
            if (Application.platform == RuntimePlatform.WSAPlayerX86)
            {
                ImageHorizontalMirror(imageBytes);
            }
            else if (Application.platform == RuntimePlatform.WSAPlayerARM)
            {
                ImageVerticalMirror(imageBytes);
            }
            VideoTexture.LoadRawTextureData(imageBytes);
            VideoTexture.Apply();
            onVideoData = true;
        }, false);
    }
    void ImageHorizontalMirror(byte[] imageBytes)
    {
        int PixelSize = 4;
        int width = resolution.width;
        int height = resolution.height;
        int Line = width * PixelSize;

        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j + 4 < Line / 2; j += 4)
            {
                Swap<byte>(ref imageBytes[Line * i + j], ref imageBytes[Line * i + Line - j - 4]);
                Swap<byte>(ref imageBytes[Line * i + j + 1], ref imageBytes[Line * i + Line - j - 3]);
                Swap<byte>(ref imageBytes[Line * i + j + 2], ref imageBytes[Line * i + Line - j - 2]);
                Swap<byte>(ref imageBytes[Line * i + j + 3], ref imageBytes[Line * i + Line - j - 1]);
            }
        }
    }
    void ImageVerticalMirror(byte[] imageBytes)
    {
        int PixelSize = 4;
        int width = resolution.width;
        int height = resolution.height;
        int Line = width * PixelSize;

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height / 2; j++)
            {
                Swap<byte>(ref imageBytes[Line * j + i * PixelSize], ref imageBytes[Line * (height - j - 1) + i * PixelSize]);
                Swap<byte>(ref imageBytes[Line * j + i * PixelSize + 1], ref imageBytes[Line * (height - j - 1) + i * PixelSize + 1]);
                Swap<byte>(ref imageBytes[Line * j + i * PixelSize + 2], ref imageBytes[Line * (height - j - 1) + i * PixelSize + 2]);
                Swap<byte>(ref imageBytes[Line * j + i * PixelSize + 3], ref imageBytes[Line * (height - j - 1) + i * PixelSize + 3]);
            }
        }
    }
    void Swap<T>(ref T lhs, ref T rhs)
    {
        T temp;
        temp = lhs;
        lhs = rhs;
        rhs = temp;
    }
#else
     public void StartCapture()
    {
    }
    public void StopCapture()
    {
    }
#endif
    private void Update()
    {
        if (onVideoData)
        {
            SendVideoData();
        }
    }

    /// <summary>
    /// 发送捕获的视频
    /// </summary>
    private void SendVideoData()
    {
        onVideoData = false;
        byte[] imageBytes = ImageConversion.EncodeToJPG(VideoTexture);
        ARManager.Instance.SendHoloviewData(imageBytes);
    }

    public void OnVideoDataReceive(byte[] data)
    {
        ImageConversion.LoadImage(VideoTexture, data);
        VideoTexture.Apply(false);
    }
}
