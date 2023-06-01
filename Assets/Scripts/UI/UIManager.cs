using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField] private GameObject _loseMenu;
    [SerializeField] private GameObject _winMenu;
    [SerializeField] private GameObject _mainMenu;
    [SerializeField] private GameObject _shopMenu;
    [SerializeField] private Image _background;
    private float _levelOftransparentOn = 0.4f;
    private float _levelOftransparentOff = 0f;
    [SerializeField] private ParticleSystem _happySmileEffect;
    [SerializeField] private ParticleSystem _sadSmileEffect;
    [SerializeField] private ParticleSystem _fireworksEffectLeft;
    [SerializeField] private ParticleSystem _fireworksEffectRight;
    [SerializeField] private TextMeshProUGUI _brickCapacityText;

    private List<GameObject> _listOfMenus;
    private List<ParticleSystem> _listOfEffects;

    // Start is called before the first frame update
    void Start()
    {
        _listOfMenus = new List<GameObject> { _loseMenu, _winMenu, _mainMenu, _shopMenu };
        _listOfEffects = new List<ParticleSystem> { _happySmileEffect, _sadSmileEffect, _fireworksEffectLeft, _fireworksEffectRight };
        OpenMainMenu();
    }

    public void OpenLoseMenu()
    {
        CloseAllMenus();
        TurnOffAllVFX();
        TurnOnBackground();
        _loseMenu.SetActive(true);
        TurnOnLoseEffect();
    }

    public void OpenShopMenu()
    {
        CloseAllMenus();
        TurnOffAllVFX();
        TurnOnBackground();
        _shopMenu.SetActive(true);
    }

    public void OpenWinMenu()
    {
        CloseAllMenus();
        TurnOffAllVFX();
        TurnOnBackground();
        _winMenu.SetActive(true);
        TurnOnWinEffect();
    }

    public void OpenMainMenu()
    {
        CloseAllMenus();
        TurnOffAllVFX();
        TurnOnBackground();
        _mainMenu.SetActive(true);
        UpdateBrickCapacityUIText();
    }

    public void CloseAllMenus()
    {
        TurnOffBackground();
        for (int i = 0; i < _listOfMenus.Count; i++)
        {
            _listOfMenus[i].SetActive(false);
        }
    }

    private void TurnOffBackground()
    {
        _background.color = new Color(_background.color.r, _background.color.g, _background.color.b, _levelOftransparentOff);
    }

    private void TurnOnBackground()
    {
        _background.color = new Color(_background.color.r, _background.color.g, _background.color.b, _levelOftransparentOn);
    }

    private void TurnOffAllVFX()
    {
        for (int i = 0; i < _listOfEffects.Count; i++)
        {
            _listOfEffects[i].Stop();
        }
    }

    private void TurnOnWinEffect()
    {
        _happySmileEffect.Play();
        _fireworksEffectLeft.Play();
        _fireworksEffectRight.Play();
    }

    private void TurnOnLoseEffect()
    {
        _sadSmileEffect.Play();
    }

    private void UpdateBrickCapacityUIText()
    {
        _brickCapacityText.SetText("Brick capacity now is " + DataStorageManager.Instance.indexOfCurrentUpgrade);
    }

}
