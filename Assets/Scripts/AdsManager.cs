using System;
using System.Collections;
using UnityEngine.Advertisements;
using UnityEngine;

public class AdsManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{
    public string GAME_ID = "5129573"; //replace with your gameID from dashboard. note: will be different for each platform.

    private const string BANNER_PLACEMENT = "Banner_Android";
    private const string VIDEO_PLACEMENT = "Interstitial_Android";
    private const string REWARDED_VIDEO_PLACEMENT = "Rewarded_Android";

    [SerializeField] private BannerPosition bannerPosition = BannerPosition.BOTTOM_CENTER;

    private bool testMode = false;

    private void Awake()
    {
        Initialize();
        ShowBanner();
        LoadRewardedAd();
    }

    public void Initialize()
    {
        if (Advertisement.isSupported)
        {
            Debug.Log(Application.platform + " supported by Advertisement");
        }
        Advertisement.Initialize(GAME_ID, testMode, this);
    }

    public void ShowBanner()
    {
        Advertisement.Banner.SetPosition(bannerPosition);
        Advertisement.Banner.Show(BANNER_PLACEMENT);
    }
    public void LoadRewardedAd()
    {
        Advertisement.Load(REWARDED_VIDEO_PLACEMENT, this);
    }

    public void ShowRewardedAd()
    {
        Advertisement.Show(REWARDED_VIDEO_PLACEMENT, this);
    }

    public void LoadNonRewardedAd()
    {
        Advertisement.Load(VIDEO_PLACEMENT, this);
    }

    public void ShowNonRewardedAd()
    {
        Advertisement.Show(VIDEO_PLACEMENT, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Initialization complete");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        throw new NotImplementedException();
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        Debug.Log("ads are loaded");
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        throw new NotImplementedException();
    }

    public void OnUnityAdsShowClick(string placementId)
    {
        throw new NotImplementedException();
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        Debug.Log("ads are showed");
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        throw new NotImplementedException();
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        Debug.Log("ads have started to show");
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
