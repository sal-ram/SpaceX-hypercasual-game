using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDecorator : MonoBehaviour
{
    [SerializeField] private Transform _playersHatPlace;
    [SerializeField] private GameObject _hat1;
    [SerializeField] private GameObject _hat2;
    [SerializeField] private GameObject _hat3;

    /*public void BuyItem(Item.ItemType itemType)
    {
        switch (itemType)
        {
            default:
            case Item.ItemType.NoHat:
                WearNoHat();
                break;
            case Item.ItemType.Hat1:
                WearHat1();
                break;
            case Item.ItemType.Hat2:
                WearHat2();
                break;
            case Item.ItemType.Hat3:
                WearHat3();
                break;
        }
    }*/

    public void WearNoHat()
    {
        DeletePreviousHat();
    }

    public void WearHat1()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat1, _playersHatPlace);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    public void WearHat2()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat2, _playersHatPlace);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    public void WearHat3()
    {
        DeletePreviousHat();
        var hat = Instantiate(_hat3, _playersHatPlace);
        hat.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
    }

    private void DeletePreviousHat()
    {
        if (_playersHatPlace.childCount > 0)
        {
            Destroy(_playersHatPlace.GetChild(0).gameObject);
        }
    }    
}
