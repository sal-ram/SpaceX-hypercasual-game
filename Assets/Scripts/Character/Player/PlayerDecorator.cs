using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class PlayerDecorator : MonoBehaviour
{
    private Transform _hatPlaceTransform;
    private PlayerController _playerController;
    [SerializeField] private GameObject _hat1;
    [SerializeField] private GameObject _hat2;
    [SerializeField] private GameObject _hat3;

    [Inject]
    private void COnstruct(PlayerController playerController)
    {
        _hatPlaceTransform = playerController.HatPlace;
        _playerController = playerController;
    }

    public void WearNoHat()
    {
        DeletePreviousHat();
    }

    public void WearHat1()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat1, _hatPlaceTransform);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    public void WearHat2()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat2, _hatPlaceTransform);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    public void WearHat3()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat3, _hatPlaceTransform);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    private void DeletePreviousHat()
    {
        if (_hatPlaceTransform.childCount > 0)
        {
            Destroy(_hatPlaceTransform.GetChild(0).gameObject);
        }
    }

    public void SetupBrickLimit(int limit)
    {
        _playerController.limitOfBrickStorage = limit;
    }
}
