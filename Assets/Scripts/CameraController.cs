using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class CameraController : MonoBehaviour
{
    //[SerializeField] private GameObject _playerObj;
    private Transform _playerTransform;
    private BrickCollector _brickCollectorPlayerObj;
    private Vector3 defaultOffset = new Vector3(0, 18, -13);
    private Vector3 offset = new Vector3(0, 0.1f, -0.1f);
    private GameObject _playerObj;

    [Inject]
    private void Construct(PlayerController playerController)
    {
        _playerObj = playerController.gameObject;
    }

    private void Awake()
    {
        _brickCollectorPlayerObj = _playerObj.GetComponent<BrickCollector>();
    }

    private void Update()
    {
    }

    // Update is called once per frame
    void LateUpdate()
    {
        var countOfBricks = _brickCollectorPlayerObj.GetAmountOfBricks();
        transform.position = _playerObj.transform.position + defaultOffset + countOfBricks * offset;
    }
}
