using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AssetItem : MonoBehaviour
{
    public Image ThumbImage;
    public TextMeshProUGUI NameText;
    public TextMeshProUGUI DescText;

    public int AbType;
    public int AbId;
    public string AbFileName;
    public string ObjName;


    /// <summary>
    /// 设定资源具体信息
    /// </summary>
    /// <param name="assetInfo"></param>
    public void SetValue(AssetInfo assetInfo)
    {
        AbType = assetInfo.AbType;
        AbId = assetInfo.AbId;
        AbFileName = assetInfo.AbFileName;
        ObjName = assetInfo.ObjName;

        NameText.text = assetInfo.TitleName;
        DescText.text = assetInfo.DescName;

        //加载模型缩略图
        LoadSprite(ThumbImage, assetInfo.AbPicFileName);
    }

    /// <summary>
    /// 加载资源缩略图
    /// </summary>
    /// <param name="image"></param>
    /// <param name="fileName"></param>
    private void LoadSprite(Image image, string fileName)
    {
        string filePath = AssetBundleManager.Instance.LocalPicPath + "/" + fileName;
        if(File.Exists(filePath))
        {
            byte[] data = File.ReadAllBytes(filePath);
            Texture2D t = new Texture2D(2, 2);

            if(t.LoadImage(data))
            {
                Sprite sprite = Sprite.Create(t, new Rect(0, 0, t.width, t.height), new Vector2(0.5f, 0.5f));
                image.sprite = sprite;
            }
            else
            {
                print("图片加载失败 ： " + fileName);
            }
        }
        else
        {
            print("图片不存在 ： " + fileName);
        }
    }
}
