using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BrickManager : MonoBehaviour
{
    private enum TypeOfLevel
    {
        SinglePlayer,
        MultyplePlayer
    }

    //[SerializeField] private int _numOfBricks = 30;
    private int _numOfBricks;
    [SerializeField] private TypeOfLevel type = TypeOfLevel.MultyplePlayer;
    [SerializeField] private List<Transform> _spawnPointMassive;
    private List<Transform> _spawnMassive;

    //[SerializeField] private Transform _brickSpawnParent;

    private List<Transform> _spawnMassiveYellow = new List<Transform>();
    private List<Transform> _spawnMassiveGreen = new List<Transform>();
    private List<Transform> _spawnMassiveRed = new List<Transform>();
    private List<Transform> _spawnMassivePink = new List<Transform>();
    private List<Transform> _spawnMassiveDefault = new List<Transform>();

    [SerializeField] private GameObject _brickYellowObj;
    [SerializeField] private GameObject _brickGreenObj;
    [SerializeField] private GameObject _brickRedObj;
    [SerializeField] private GameObject _brickPinkObj;

    private string _yellowTag;
    private string _redTag;
    private string _greenTag;
    private string _pinkTag;

    [SerializeField] public int countOfPlayers = 0;

    private void Awake()
    {
        if (type == TypeOfLevel.MultyplePlayer)
        {
            _numOfBricks = _spawnPointMassive.Count/4;
            CreateRandomSpawnPointLists();
        }
        else
        {
            _numOfBricks = _spawnPointMassive.Count - 1;
            CreateSpawnList(_spawnMassiveDefault);
        }
    }

    void Start()
    {
        _yellowTag = _brickYellowObj.tag;
        _redTag = _brickRedObj.tag;
        _greenTag = _brickGreenObj.tag;
        _pinkTag = _brickPinkObj.tag;
    }

    public void SpawnBrick(string tagBrick)
    {
        if (tagBrick == _yellowTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                if (_spawnMassiveYellow.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveYellow, _brickYellowObj);
            }
            else
            {
                if (_spawnMassiveDefault.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveDefault, _brickYellowObj);
            }
        }

        if (tagBrick == _greenTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                if (_spawnMassiveGreen.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveGreen, _brickGreenObj);
            }
            else
            {
                if (_spawnMassiveDefault.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveDefault, _brickGreenObj);
            }
        }

        if (tagBrick == _redTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                if (_spawnMassiveRed.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveRed, _brickRedObj);
            }
            else
            {
                if (_spawnMassiveDefault.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveDefault, _brickRedObj);
            }
        }

        if (tagBrick == _pinkTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                if (_spawnMassivePink.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassivePink, _brickPinkObj);
            }
            else
            {
                if (_spawnMassiveDefault.Count > 0)
                    SpawnBrickAtRandomPlace(_spawnMassiveDefault, _brickPinkObj);
            }
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
            if (type == TypeOfLevel.MultyplePlayer)
            {
                _spawnMassiveYellow.Add(transformOfBrick);
            }
            else
            {
                _spawnMassiveDefault.Add(transformOfBrick);
            }
        }

        if (tagBrick == _greenTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                _spawnMassiveGreen.Add(transformOfBrick);
            }
            else
            {
                _spawnMassiveDefault.Add(transformOfBrick);
            }
        }

        if (tagBrick == _redTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                _spawnMassiveRed.Add(transformOfBrick);
            }
            else
            {
                _spawnMassiveDefault.Add(transformOfBrick);
            }
        }

        if (tagBrick == _pinkTag)
        {
            if (type == TypeOfLevel.MultyplePlayer)
            {
                _spawnMassivePink.Add(transformOfBrick);
            }
            else
            {
                _spawnMassiveDefault.Add(transformOfBrick);
            }
        }
    }

    private void CreateRandomSpawnPointLists()
    {
        CreateRandomSpawnList(_spawnMassiveYellow);
        CreateRandomSpawnList(_spawnMassiveGreen);
        CreateRandomSpawnList(_spawnMassiveRed);
        CreateRandomSpawnList(_spawnMassivePink);
    }

    private void CreateRandomSpawnList(List<Transform> listBrickPoints)
    {
        for (int i = 0; i < _numOfBricks; i++)
        {
            var index = UnityEngine.Random.Range(0, _spawnPointMassive.Count);
            listBrickPoints.Add(_spawnPointMassive[index]);
            _spawnPointMassive.RemoveAt(index);
        }
    }

    private void CreateSpawnList(List<Transform> listBrickPoints)
    {
        for (int i = 0; i < _numOfBricks; i++)
        {
            try
            {
                listBrickPoints.Add(_spawnPointMassive[i]);
            }
            catch(Exception ex)
            {
                Debug.Log(ex + " " + i);
            }
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
        if (type == TypeOfLevel.MultyplePlayer)
        {
            SpawnBricks(_spawnMassiveRed, _brickRedObj);
        }
        else
        {
            SpawnBricks(_spawnMassiveDefault, _brickRedObj);
        }
    }

    public void SpawnYellowBricks()
    {
        if (type == TypeOfLevel.MultyplePlayer)
        {
            SpawnBricks(_spawnMassiveYellow, _brickYellowObj);
        }
        else
        {
            SpawnBricks(_spawnMassiveDefault, _brickYellowObj);
        }
    }

    public void SpawnGreenBricks()
    {
        if (type == TypeOfLevel.MultyplePlayer)
        {
            SpawnBricks(_spawnMassiveGreen, _brickGreenObj);
        }
        else
        {
            SpawnBricks(_spawnMassiveDefault, _brickGreenObj);
        }
    }

    public void SpawnPinkBricks()
    {
        if (type == TypeOfLevel.MultyplePlayer)
        {
            SpawnBricks(_spawnMassivePink, _brickPinkObj);
        }
        else
        {
            SpawnBricks(_spawnMassiveDefault, _brickPinkObj);
        }
    }
}
