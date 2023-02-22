using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    [SerializeField] private GameObject _loseMenu;
    [SerializeField] private GameObject _winMenu;
    [SerializeField] private GameObject _mainMenu;
    [SerializeField] private GameObject _shopMenu;
    private List<GameObject> _listOfMenus;

    // Start is called before the first frame update
    void Start()
    {
        _listOfMenus = new List<GameObject> { _loseMenu, _winMenu, _mainMenu, _shopMenu };
        _mainMenu.SetActive(true);
    }

    public void OpenLoseMenu()
    {
        CloseAllMenus();
        _loseMenu.SetActive(true);
    }

    public void OpenShopMenu()
    {
        CloseAllMenus();
        _shopMenu.SetActive(true);
    }

    public void OpenWinMenu()
    {
        CloseAllMenus();
        _winMenu.SetActive(true);
    }

    public void OpenMainMenu()
    {
        CloseAllMenus();
        _mainMenu.SetActive(true);
    }

    public void CloseAllMenus()
    {
        for (int i = 0; i < _listOfMenus.Count; i++)
        {
            _listOfMenus[i].SetActive(false);
        }
    }

}
