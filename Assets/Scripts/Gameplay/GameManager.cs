using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;
using Zenject;

public class GameManager : MonoBehaviour
{
    [SerializeField] private SurfaceManager _surfaceManager;
    [SerializeField] private UIManager _uiManager;
    [SerializeField] private ShopManager _shopManager;
    [SerializeField] private CameraController _cameraController;

    private AudioSource _audioSource;
    [SerializeField] private AudioClip _loseAudio;
    [SerializeField] private AudioClip _winAudio;

    private PlayerController _playerController;

    [Inject(Id = "BotYellow")]
    private BotController _botYellow;
    [Inject(Id = "BotGreen")]
    private BotController _botGreen;
    [Inject(Id = "BotPink")]
    private BotController _botPink;

    private List<Controller> _listOfPlayers;

    private readonly int _amountMoneyForWin = 100;

    [Inject]
    private void Construct(PlayerController playerController)
    {
        _playerController = playerController;
    }

    private void Awake()
    {
        _shopManager.OnGameStart();
        Application.targetFrameRate = 60;
        _audioSource = GetComponent<AudioSource>();
        _listOfPlayers = new List<Controller>() { _playerController, _botYellow, _botGreen, _botPink };
        ConnectPlayersHandlers();
    }

    private void OnLose()
    {
        StopGame();
        _audioSource.PlayOneShot(_loseAudio);
        _uiManager.OpenLoseMenu();
    }

    private void OnWin()
    {
        StopGame();
        _audioSource.PlayOneShot(_winAudio);
        _uiManager.OpenWinMenu();
        DataStorageManager.Instance.UpdateCurrentLevel();
    }

    private void OnReachingFinish(string name)
    {
        if (name == _playerController.name)
        {
            _playerController.StartWinAnimation();
            _cameraController.ShowTheWinner(_playerController.transform.position);
            OnWin();
        }
        else
        {
            if (name == _botYellow.name)
            {
                _botYellow.StartWinAnimation();
                _cameraController.ShowTheWinner(_botYellow.transform.position);
                OnLose();
            }
            else if (name == _botGreen.name)
            {
                _botGreen.StartWinAnimation();
                _cameraController.ShowTheWinner(_botGreen.transform.position);
                OnLose();
            }
            else if (name == _botPink.name)
            {
                _botPink.StartWinAnimation();
                _cameraController.ShowTheWinner(_botPink.transform.position);
                OnLose();
            }
        }
    }

    public void GoToMainMenu()
    {
        var indexOfNewLevel = DataStorageManager.Instance.indexOfCurrentLevel;
        AddressablesLoader.Instance.RestartLevelAsync(indexOfNewLevel);
    }

    public void GoToNewLevel()
    {
        var indexOfNewLevel = DataStorageManager.Instance.indexOfCurrentLevel;
        AddressablesLoader.Instance.LoadNewLevelAsync(indexOfNewLevel);
    }

    private void ConnectPlayersHandlers()
    {
        _playerController.OnPlayerFall += OnLose;

        for (int i = 0; i < _listOfPlayers.Count; i++)
        {
            _listOfPlayers[i].OnReachFinish += OnReachingFinish;
        }
    }

    public void StartGame()
    {
        _uiManager.CloseAllMenus();
        for (int i = 0; i < _listOfPlayers.Count; i++)
        {
            _listOfPlayers[i].IsGameStarted = true;
        }
    }

    public void StopGame()
    {
        for (int i = 0; i < _listOfPlayers.Count; i++)
        {
            _listOfPlayers[i].IsGameStarted = false;
        }
    }

    public void AddMoneyForWin()
    {
        _shopManager.AddMoney(_amountMoneyForWin);
    }

    public void AddMoneyForWinWithAdd()
    {
        _shopManager.AddMoney(_amountMoneyForWin * 2);
    }
}
