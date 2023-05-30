using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AppodealStack.Monetization.Api;
using AppodealStack.Monetization.Common;

public class AppodealAdsManager : MonoBehaviour
{
	private string _appKey = "2f81f95ceb4b6ad3bc0d755bd9c92d970564108ee01845c1";
	private void Start()
	{
		int adTypes = AppodealAdType.Banner | AppodealAdType.RewardedVideo;
		AppodealCallbacks.Sdk.OnInitialized += OnInitializationFinished;
		Appodeal.Initialize(_appKey, adTypes);
		ShowBanner();
	}

	private void ShowBanner()
	{
		Appodeal.Show(AppodealShowStyle.BannerBottom);
	}

	public void ShowRewardedVideo()
	{
		Appodeal.Show(AppodealShowStyle.RewardedVideo);
	}

	#region Initialization Callback
	public void OnInitializationFinished(object sender, SdkInitializedEventArgs e)
	{
		Debug.Log("Initialization Finished");
	}
	#endregion
}
