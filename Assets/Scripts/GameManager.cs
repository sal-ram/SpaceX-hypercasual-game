using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [SerializeField] private SurfaceManager _surfaceManager;
    [SerializeField] private UIManager _uiManager;
    [SerializeField] private ShopManager _shopManager;
    [SerializeField] private AdsManager _adsManager;

    //[SerializeField] private List<GameObject> _listOfPlayersObj;
    private AudioSource _audioSource;
    [SerializeField] private AudioClip _loseAudio;
    [SerializeField] private AudioClip _winAudio;

    [SerializeField] private PlayerController _playerController;
    [SerializeField] private List<Controller> _listOfPlayers;

    private readonly int _amountMoneyForWin = 100;

    private void Awake()
    {
        _shopManager.OnGameStart();
        Application.targetFrameRate = 60;
        //_surfaceManager.OnAllLaddersIsBuilded += OnSurfaceBaked;
        _audioSource = GetComponent<AudioSource>();
        //_listOfMenus = new List<GameObject> { _loseMenu, _winMenu, _mainMenu };
        //_mainMenu.SetActive(true);
        _listOfPlayers.Add(_playerController);
        ConnectPlayersHandlers();
    }

    private void OnSurfaceBaked()
    {
        /*for (int i = 0; i < _listOfPlayersObj.Count; i++)
        {
            _listOfPlayersObj[i].GetComponent<NavMeshAgent>().enabled = true;
        }*/
    }

    private void OnLose()
    {
        /*CloseAllMenus();
        _loseMenu.SetActive(true);*/
        StopGame();
        _audioSource.PlayOneShot(_loseAudio);
        _uiManager.OpenLoseMenu();
    }

    private void OnWin()
    {
        /*CloseAllMenus();
        _winMenu.SetActive(true);*/
        StopGame();
        _audioSource.PlayOneShot(_winAudio);
        _uiManager.OpenWinMenu();
    }

    private void OnReachingFinish(string name)
    {
        if (name == "Character")
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
