using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class CameraController : MonoBehaviour
{
    private BrickCollector _brickCollectorPlayerObj;
    private Vector3 defaultOffset = new Vector3(0, 25, -17);
    private Vector3 offset = new Vector3(0, 0.1f, -0.1f);
    private Vector3 winOffset = new Vector3(0, 6, -10);
    private Vector3 _targerCamPos;
    private GameObject _playerObj;
    private float smoothing = 7f;
    private bool IsGamePlaying = true;
    private Vector3 _cameraWinRotation = new Vector3(20, 0, 0);

    [Inject]
    private void Construct(PlayerController playerController)
    {
        _playerObj = playerController.gameObject;
    }

    private void Awake()
    {
        _brickCollectorPlayerObj = _playerObj.GetComponent<BrickCollector>();
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if (IsGamePlaying)
        {
            var countOfBricks = _brickCollectorPlayerObj.GetAmountOfBricks();
            _targerCamPos = _playerObj.transform.position + defaultOffset + countOfBricks * offset;


            transform.position = Vector3.Lerp(transform.position,
                                                   _targerCamPos,
                                                   smoothing * Time.deltaTime);
        }
    }

    public void ShowTheWinner(Vector3 winPosition)
    {
        IsGamePlaying = false;
        _targerCamPos = winPosition + winOffset;
        StartCoroutine(LerpRotationFunction(Quaternion.Euler(_cameraWinRotation), 1));
        StartCoroutine(LerpPositionFunction(_targerCamPos, 3));
    }

    IEnumerator LerpRotationFunction(Quaternion endValue, float duration)
    {
        float time = 0;
        Quaternion startValue = transform.rotation;

        while (time < duration)
        {
            transform.rotation = Quaternion.Lerp(startValue, endValue, time / duration);
            time += Time.deltaTime;
            yield return null;
        }

        transform.rotation = endValue;
    }
    IEnumerator LerpPositionFunction(Vector3 endValue, float duration)
    {
        float time = 0;
        Vector3 startValue = transform.position;

        while (time < duration)
        {
            transform.position = Vector3.Lerp(startValue,
                                                   endValue,
                                                   time / duration);
            time += Time.deltaTime;
            yield return null;
        }

        transform.position = endValue;
    }
}
