using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Linq;
using System.IO;
using UnityEngine.UI;

public class LoggerManager : MonoBehaviour
{
    public TextMeshProUGUI LogText;
    public bool LogEnable;
    public bool OnlyError;
    public int LogCount = 20;
    RectTransform rect;
    string logFilePath;
    public Toggle LogEnableTog;
    public Toggle OnlyErrorTog;
    void Awake()
    {
        logFilePath = Application.persistentDataPath + "/" + DateTime.Now.ToString("yyyy-MM-dd") + ".txt";
        if (!File.Exists(logFilePath))
        {
            File.Create(logFilePath).Close();
        }
        LogText.text = "";
        rect = LogText.GetComponent<RectTransform>();
        Application.logMessageReceived += logMessageReceived;
        if (PlayerPrefs.HasKey("LogEnableKey"))
        {
            LogEnable = PlayerPrefs.GetInt("LogEnableKey") == 1;
            LogEnableTog.isOn = LogEnable;
        }
        if (PlayerPrefs.HasKey("OnlyErrorKey"))
        {
            OnlyError = PlayerPrefs.GetInt("OnlyErrorKey") == 1;
            OnlyErrorTog.isOn = OnlyError;
        }
        Debug.unityLogger.logEnabled = LogEnable;
        Debug.Log("==================");
        Debug.Log(logFilePath);
    }

    /// <summary>
    /// 获取LOG消息的回调
    /// </summary>
    /// <param name="condition"></param>
    /// <param name="stackTrace"></param>
    /// <param name="type"></param>
    List<string> logList = new List<string>();
    private void logMessageReceived(string condition, string stackTrace, LogType type)
    {
        string logTime = "<color #00FF00>" + DateTime.Now.ToString("MM-dd HH:mm:ss") + "</color>" + "\n";
        string log = "";
        switch (type)
        {
            case LogType.Error:
            case LogType.Assert:
            case LogType.Exception:
                logTime = "<color #FF0000>" + DateTime.Now.ToString("MM-dd HH:mm:ss") + "</color>" + "\n";
                if (string.IsNullOrEmpty(stackTrace)) stackTrace = Environment.StackTrace;
                log = string.Format("{0}\n{1}\n", condition, stackTrace);
                break;
            case LogType.Warning:
                return;
            case LogType.Log:
                if (OnlyError) return;
                log = condition + "\n";
                break;
            default:
                break;
        }
        logList.Add(logTime + log);
        if (logList.Count >= LogCount)
        {
            string str = string.Concat(logList.ToArray());
            LogText.text = str;
            WriteLog(str);
            logList.Clear();
        }
        else
        {
            LogText.text += logTime + log;
        }

        if (LogText != null)
        {
            rect.sizeDelta = new Vector2(rect.sizeDelta.x, LogText.preferredHeight + 50);
            rect.anchoredPosition = new Vector2(rect.anchoredPosition.x, rect.sizeDelta.y);
        }
    }

    /// <summary>
    /// 第一次打开日志时得更新一下
    /// </summary>
    /// <param name="tog"></param>
    public void OnLogTogOn(Toggle tog)
    {
        if (tog.isOn)
        {
            rect.sizeDelta = new Vector2(rect.sizeDelta.x, LogText.preferredHeight + 50);
            rect.anchoredPosition = new Vector2(rect.anchoredPosition.x, rect.sizeDelta.y);
        }
    }

    /// <summary>
    /// 当按下LogEnable
    /// </summary>
    /// <param name="tog"></param>
    public void OnLogEnableTog(Toggle tog)
    {
        LogEnable = tog.isOn;
        Debug.unityLogger.logEnabled = LogEnable;
        PlayerPrefs.SetInt("LogEnableKey", LogEnable ? 1 : 0);
        PlayerPrefs.Save();
    }

    /// <summary>
    /// 当按下OnlyError
    /// </summary>
    /// <param name="tog"></param>
    public void OnOnlyErrorTog(Toggle tog)
    {
        OnlyError = tog.isOn;
        PlayerPrefs.SetInt("OnlyErrorKey", OnlyError ? 1 : 0);
        PlayerPrefs.Save();
    }

    /// <summary>
    /// 销毁时最后存入log文件
    /// </summary>
    private void OnDestroy()
    {
        if (logList.Count > 0)
        {
            WriteLog(string.Concat(logList.ToArray()));
        }
    }

    /// <summary>
    /// 存入本地log
    /// </summary>
    /// <param name="str"></param>
    void WriteLog(string str)
    {
        if (File.Exists(logFilePath))
        {
            FileStream fs = File.Open(logFilePath, FileMode.Append);
            using (StreamWriter writer = new StreamWriter(fs))
            {
                writer.WriteLine(str);
            }
            fs.Close();
        }
    }
}
