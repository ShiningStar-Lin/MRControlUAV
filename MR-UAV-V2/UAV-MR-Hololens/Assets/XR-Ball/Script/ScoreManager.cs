
using TMPro;
using UnityEngine;

namespace XR.Ball
{
    public class ScoreManager : Singleton<ScoreManager>
    {
        [SerializeField]
        public TextMeshProUGUI ScoreLabel;

        private uint score;

        protected uint Score
        {
            get => score;
            set
            {
                score = value;
                if(ScoreLabel != null)
                {
                    ScoreLabel.text = "分数 : " + score.ToString();
                }
            }
        }

        /// <summary>
        /// 放置没有创建单例
        /// </summary>
        protected ScoreManager() { }

        private void Awake()
        {
            ResetScore();
        }

        /// <summary>
        /// 重置分数
        /// </summary>
        private void ResetScore()
        {
            Score = 0;
        }

        public void Show()
        {
            SetScoreVisibility(true);
        }

        public void Hide()
        {
            SetScoreVisibility(false);
        }

        /// <summary>
        /// 增加分数
        /// </summary>
        /// <param name="score"></param>
        public void AddScore(uint score)
        {
            Score += score;
        }

        /// <summary>
        /// 设置是否显示分数
        /// </summary>
        /// <param name="isVisible"></param>
        public void SetScoreVisibility(bool isVisible)
        {
            if(ScoreLabel != null)
            {
                ScoreLabel.gameObject.SetActive(isVisible);
            }
        }
    }
}

