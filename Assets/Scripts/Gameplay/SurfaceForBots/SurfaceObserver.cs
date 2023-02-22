using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Zenject;

public class SurfaceObserver : MonoBehaviour
{
    [SerializeField] private BrickManager _brickManager;
    [SerializeField] private Transform[] wayPointsMassive;
    [SerializeField] private List<LadderManager> ladderManagers;

    private int indexOfLadder = 0;

    private PlayerController _playerController;

    [Inject(Id = "BotGreen")]
    private BotController _botGreen;

    [Inject(Id = "BotYellow")]
    private BotController _botYellow;

    [Inject(Id = "BotPink")]
    private BotController _botPink;

    public List<PlayersAppearingHandler> destroyHandlers;

    [Inject]
    private void Construct(PlayerController playerController)
    {
        _playerController = playerController;
    }

    private void Awake()
    {
        ShuffleList();
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

    private void CheckName(string name)
    {
        if (name == "Character")
        {
            DetectPlayerOnSurface();
            _brickManager.SpawnRedBricks();
        }

        if (name == "BotYellow")
        {
            DetectBotOnSurface(_botYellow);
            _brickManager.SpawnYellowBricks();
        }

        if (name == "BotPink")
        {
            DetectBotOnSurface(_botPink);
            _brickManager.SpawnPinkBricks();
        }

        if (name == "BotGreen")
        {
            DetectBotOnSurface(_botGreen);
            _brickManager.SpawnGreenBricks();
        }
    }

    private void DetectPlayerOnSurface()
    {
        _playerController.UpdateManager(_brickManager);
    }

    private void DetectBotOnSurface(BotController bot)
    {
        if (indexOfLadder >= ladderManagers.Count)
        {
            indexOfLadder = 0;
        }

        bot.UpdateManagers(_brickManager, wayPointsMassive, ladderManagers[indexOfLadder]);
        indexOfLadder++;
    }
}
