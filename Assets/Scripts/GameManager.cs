using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.SceneManagement;
using Zenject;

public class GameManager : MonoBehaviour
{
    [SerializeField] private SurfaceManager _surfaceManager;
    [SerializeField] private UIManager _uiManager;
    [SerializeField] private ShopManager _shopManager;
    [SerializeField] private AdsManager _adsManager;

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
    }

    private void OnReachingFinish(string tag)
    {
        if (tag == "Player")
        {
            OnWin();
        }
        else
        {
            OnLose();
        }
    }

    public void GoToMainMenu()
    {
        SceneManager.LoadScene(0);
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
