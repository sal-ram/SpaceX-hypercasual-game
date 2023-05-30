using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;

public class AddressablesLoader : MonoBehaviour
{
    public static AddressablesLoader Instance;
    private string _levelWord = "Level ";

    [SerializeField] private AssetReference _assetReferencesLoadingScene;
    [SerializeField] private AssetReference _assetReferenceLevel;

    private SceneInstance _cachedLevelScene;
    private SceneInstance _cachedLoadingScene;
    private GameObject _cachedPrefabScene;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    public async void RestartLevelAsync(int indexOfCurrentLevel)
    {
        var asyncLoadingScreenHandle = Addressables.LoadSceneAsync(_assetReferencesLoadingScene, LoadSceneMode.Single);
        _cachedLoadingScene = await asyncLoadingScreenHandle.Task;

        UnloadLevelAddressable();

        var handleLoadingScene = Addressables.LoadSceneAsync(_assetReferenceLevel, LoadSceneMode.Single);
        _cachedLevelScene = await handleLoadingScene.Task;

        Instantiate(_cachedPrefabScene);

        UnloadLoadingLevelAddressable();
    }


    public async void LoadNewLevelAsync(int indexOfCurrentLevel)
    {
        var asyncLoadingScreenHandle = Addressables.LoadSceneAsync(_assetReferencesLoadingScene, LoadSceneMode.Single);
        _cachedLoadingScene = await asyncLoadingScreenHandle.Task;
        
        UnloadLevelAddressable();

        var handleLevelPrefabScene = Addressables.LoadAssetAsync<GameObject>(ConstructLevelName(indexOfCurrentLevel));
        _cachedPrefabScene = await handleLevelPrefabScene.Task;

        var handleLoadingScene = Addressables.LoadSceneAsync(_assetReferenceLevel, LoadSceneMode.Single);
        _cachedLevelScene = await handleLoadingScene.Task;

        Instantiate(_cachedPrefabScene);

        UnloadLoadingLevelAddressable();
    }

    private void UnloadLevelAddressable()
    {
        if (_cachedLevelScene.Scene.name == null)
            return;
        else
            Addressables.Release(_cachedLevelScene);        
    }

    private void UnloadLoadingLevelAddressable()
    {
        if (_cachedLoadingScene.Scene.name == null)
            return;
        else
            Addressables.Release(_cachedLoadingScene);
    }

    private string ConstructLevelName(int indexOfCurrentLevel)
    {
        var level = _levelWord + indexOfCurrentLevel;
        return level;
    }
}
