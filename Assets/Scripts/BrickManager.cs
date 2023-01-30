using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrickManager : MonoBehaviour
{
    [SerializeField] private int _numOfBricks = 30;
    [SerializeField] private List<Transform> _spawnPointMassive;
    private List<Transform> _spawnMassive;

    [SerializeField] private Transform _brickSpawnParent;

    private List<Transform> _spawnMassiveYellow = new List<Transform>();
    private List<Transform> _spawnMassiveGreen = new List<Transform>();
    private List<Transform> _spawnMassiveRed = new List<Transform>();
    private List<Transform> _spawnMassivePink = new List<Transform>();

    [SerializeField] private GameObject _brickYellowObj;
    [SerializeField] private GameObject _brickGreenObj;
    [SerializeField] private GameObject _brickRedObj;
    [SerializeField] private GameObject _brickPinkObj;

    private string _yellowTag;
    private string _redTag;
    private string _greenTag;
    private string _pinkTag;

    [SerializeField] public int countOfPlayers = 0;

    public void SpawnBrick(string tagBrick)
    {
        if (tagBrick == _yellowTag)
        {
            if(_spawnMassiveYellow.Count > 0)
               SpawnBrickAtRandomPlace(_spawnMassiveYellow, _brickYellowObj);
        }

        if (tagBrick == _greenTag)
        {
            if (_spawnMassiveGreen.Count > 0)
                SpawnBrickAtRandomPlace(_spawnMassiveGreen, _brickGreenObj);
        }

        if (tagBrick == _redTag)
        {
            if (_spawnMassiveRed.Count > 0)
                SpawnBrickAtRandomPlace(_spawnMassiveRed, _brickRedObj);
        }

        if (tagBrick == _pinkTag)
        {
            if (_spawnMassivePink.Count > 0)
                SpawnBrickAtRandomPlace(_spawnMassivePink, _brickPinkObj);
        }
    }

    public void AddNewPlayer()
    {
        countOfPlayers++;
    }

    public void RemovePlayer()
    {
        countOfPlayers--;
    }

    public void AddNewFreeSpaceForBrick(string tagBrick, Transform transformOfBrick)
    {
        if (tagBrick == _yellowTag)
        {
            _spawnMassiveYellow.Add(transformOfBrick);
        }

        if (tagBrick == _greenTag)
        {
            _spawnMassiveGreen.Add(transformOfBrick);
        }

        if (tagBrick == _redTag)
        {
            _spawnMassiveRed.Add(transformOfBrick);
        }

        if (tagBrick == _pinkTag)
        {
            _spawnMassivePink.Add(transformOfBrick);
        }
    }

    private void Awake()
    {
        _spawnMassive = _spawnPointMassive;
        CreateRandomSpawnPointLists();
    }

    private void CreateRandomSpawnPointLists()
    {
        CreateSpawnList(_spawnMassiveYellow);
        CreateSpawnList(_spawnMassiveGreen);
        CreateSpawnList(_spawnMassiveRed);
        CreateSpawnList(_spawnMassivePink);
    }

    private void CreateSpawnList(List<Transform> listBrickPoints)
    {
        for (int i = 0; i < _numOfBricks; i++)
        {
            var index = UnityEngine.Random.Range(0, _spawnMassive.Count);
            listBrickPoints.Add(_spawnMassive[index]);
            _spawnMassive.RemoveAt(index);
        }
    }

    private void SpawnBricks(List<Transform> listOfSpawnPoints, GameObject brickObj)
    {
        for (int i = 0; i < listOfSpawnPoints.Count; i++)
        {
            Instantiate(brickObj, listOfSpawnPoints[i]);
        }

        listOfSpawnPoints.Clear();
    }

    private void SpawnBrickAtRandomPlace(List<Transform> listOfSpawnPoints, GameObject brickObj)
    {
        try
        {
            var randIndexPos = UnityEngine.Random.Range(0, listOfSpawnPoints.Count);
            // var brick = Instantiate(brickObj, listOfSpawnPoints[randIndexPos]);
            var brick = listOfSpawnPoints[randIndexPos].GetChild(0);
            brick.gameObject.SetActive(true);
            listOfSpawnPoints.RemoveAt(randIndexPos);
        }
        catch (Exception ex)
        {
            Debug.Log(listOfSpawnPoints.Count);
            Debug.Log(ex);
        }
    }

    public void SpawnRedBricks()
    {
        SpawnBricks(_spawnMassiveRed, _brickRedObj);
    }

    public void SpawnYellowBricks()
    {
        SpawnBricks(_spawnMassiveYellow, _brickYellowObj);
    }

    public void SpawnGreenBricks()
    {
        SpawnBricks(_spawnMassiveGreen, _brickGreenObj);
    }

    public void SpawnPinkBricks()
    {
        SpawnBricks(_spawnMassivePink, _brickPinkObj);
    }

    void Start()
    {
        _yellowTag = _brickYellowObj.tag;
        _redTag = _brickRedObj.tag;
        _greenTag = _brickGreenObj.tag;
        _pinkTag = _brickPinkObj.tag;

        /*SpawnBricks(_spawnMassiveYellow, _brickYellowObj);
        SpawnBricks(_spawnMassiveRed, _brickRedObj);
        SpawnBricks(_spawnMassiveGreen, _brickGreenObj);
        SpawnBricks(_spawnMassivePink, _brickPinkObj);*/
    }
}
