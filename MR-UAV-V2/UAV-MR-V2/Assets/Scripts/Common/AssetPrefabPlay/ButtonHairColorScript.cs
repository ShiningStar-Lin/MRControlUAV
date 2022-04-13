using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonHairColorScript : MonoBehaviour
{
    public GameObject[] hairArray;
    PlayAnimation ani;
    private int hairArrayLen;

    private float r;
    private float g;
    private float b;
    // Start is called before the first frame update
    void Start()
    {
        hairArrayLen = hairArray.Length;
    }

    bool isFirstTime = true;
    // Update is called once per frame
    void Update()
    {
        if(transform.GetComponentInChildren<PlayAnimation>() != null && isFirstTime)
        {
            ani = transform.GetComponentInChildren<PlayAnimation>();
            isFirstTime = false;
        }

        if(ani.IsDancing)
        {
            PlaySoundManager.Instance.PlayBg("DanceSound");
            ButtonHairChangeFunction();
        }
        else
        {
            PlaySoundManager.Instance.StopBg();
        }
    }

    public void ButtonHairChangeFunction()
    {
        r = Random.Range(0f,1f);
        g = Random.Range(0f, 1f);
        b = Random.Range(0f, 1f);

        for (int i = 0; i < hairArrayLen; i++)
        {
            Material mat = hairArray[i].GetComponent<SkinnedMeshRenderer>().material;
            mat.SetColor("_Color",new Color(r,g,b));
        }
    }
}
