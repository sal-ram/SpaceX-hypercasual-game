using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using System.Linq;
using System;

public class SurfaceObserver : MonoBehaviour
{
    //[SerializeField] private NavMeshSurface surfaceForMovingObjects;
    //[SerializeField] private NavMeshSurface surfaceForLevel;
    //private NavMeshSurface surface;
    //private bool IsSurfaceRemoved = false;
    //[SerializeField] private NavSurfaceBaker _surfaceBaker;
    [SerializeField] private BrickManager _brickManager;
    [SerializeField] private Transform[] wayPointsMassive;
    [SerializeField] private List<LadderManager> ladderManagers;
    //[SerializeField] private bool IsAdded = false;
    private int indexOfLadder = 0;

    public List<DestroyHandler> destroyHandlers;

    private void Awake()
    {
        ShuffleList();
        //surface = GetComponent<NavMeshSurface>();
    }

    private void ShuffleList()
    {
        var randomListStart = ladderManagers;
        var randomListEnd = new List<LadderManager>();

        while (randomListStart.Count > 0)
        {
            var index = UnityEngine.Random.Range(0, randomListStart.Count);
            randomListEnd.Add(randomListStart.ElementAt(index));
            randomListStart.RemoveAt(index);
        }

        ladderManagers = randomListEnd;
    }

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < destroyHandlers.Count; i++)
        {
            destroyHandlers[i].OnCharacterAppeared += CheckName;
        }
    }

    // Update is called once per frame
    void Update()
    {
        /*try
        {
            if (_brickManager?.countOfPlayers == 0 && !IsSurfaceRemoved && IsAdded)
            {
                _surfaceBaker.RemoveSurface(surfaceForMovingObjects);
                IsAdded = false;
                IsSurfaceRemoved = true;
            }
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
        }*/
    }

    private void CheckName(string name)
    {
        /*if (!IsAdded)
        {
            AddToBaker();
        }*/

        if (name == "Character")
        {
            var player = GameObject.Find(name);
            DetectPlayerOnSurface(player);
            _brickManager.SpawnRedBricks();
        }

        if (name == "BotYellow")
        {
            var bot = GameObject.Find(name);
            DetectBotOnSurface(bot);
            _brickManager.SpawnYellowBricks();
        }

        if (name == "BotPink")
        {
            var bot = GameObject.Find(name);
            DetectBotOnSurface(bot);
            _brickManager.SpawnPinkBricks();
        }

        if (name == "BotGreen")
        {
            var bot = GameObject.Find(name);
            DetectBotOnSurface(bot);
            _brickManager.SpawnGreenBricks();
        }
    }

    private void DetectPlayerOnSurface(GameObject player)
    {
        var playerController = player.GetComponent<PlayerController>();
        playerController.UpdateManager(_brickManager);
        //_brickManager.AddNewPlayer();
    }

    private void AddToBaker()
    {
        //_surfaceBaker.AddSurface(surfaceForMovingObjects);
        //_brickManager.gameObject.SetActive(true);
        /*IsAdded = true;
        IsSurfaceRemoved = false;*/
    }

    private void DetectBotOnSurface(GameObject bot)
    {
        var botController = bot.GetComponent<BotController>();
        if (indexOfLadder >= ladderManagers.Count)
        {
            indexOfLadder = 0;
        }
        //var indexOfLadder = Random.Range(0, ladderManagers.Count);
        botController.UpdateManagers(_brickManager, wayPointsMassive, ladderManagers[indexOfLadder]);
        indexOfLadder++;
        //_brickManager.AddNewPlayer();
        //ladderManagers.RemoveAt(indexOfLadder);
    }
}
