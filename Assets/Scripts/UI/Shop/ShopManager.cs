using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    public int AmountOfMoney { get; private set; }
    [SerializeField] private TextMeshProUGUI _textOfWallet;
    private Transform _container;
    private Transform _shopItemTemplate;
    [SerializeField] private PlayerDecorator _playerDecorator;
    private List<TextMeshProUGUI> _listofItemsTexts = new List<TextMeshProUGUI>();

    public void OnGameStart()
    {
        Debug.Log(Application.persistentDataPath);
        DataStorageManager.Instance.LoadData();
        AmountOfMoney = DataStorageManager.Instance.AmountOfMoney;
        _textOfWallet.SetText(AmountOfMoney.ToString());

        _playerDecorator.SetupBrickLimit(DataStorageManager.Instance.indexOfCurrentUpgrade);

        switch (DataStorageManager.Instance.indexOfEquippedHat)
        {
            default:
            case (int)Item.ItemType.NoHat:
                break;
            case (int)Item.ItemType.Hat1:
                _playerDecorator.WearHat1();
                break;
            case (int)Item.ItemType.Hat2:
                _playerDecorator.WearHat2();
                break;
            case (int)Item.ItemType.Hat3:
                _playerDecorator.WearHat3();
                break;
        }
    }

    private void Awake()
    {
        _container = transform.Find("Container");
        _shopItemTemplate = _container.Find("ShopItemTemplate");
        _shopItemTemplate.gameObject.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {
        CreateItemButtonBool(Item.ItemType.NoHat, Item.GetSprite(Item.ItemType.NoHat), Item.GetCost(Item.ItemType.NoHat), true);
        CreateItemButtonBool(Item.ItemType.Hat1, Item.GetSprite(Item.ItemType.Hat1), Item.GetCost(Item.ItemType.Hat1), DataStorageManager.Instance.IsHat1Bought);
        CreateItemButtonBool(Item.ItemType.Hat2, Item.GetSprite(Item.ItemType.Hat2), Item.GetCost(Item.ItemType.Hat2), DataStorageManager.Instance.IsHat2Bought);
        CreateItemButtonBool(Item.ItemType.Hat3, Item.GetSprite(Item.ItemType.Hat3), Item.GetCost(Item.ItemType.Hat3), DataStorageManager.Instance.IsHat3Bought);
        CreateItemButtonInt(Item.ItemType.BrickAmountUpgrade, Item.GetSprite(Item.ItemType.BrickAmountUpgrade), Item.GetCost(Item.ItemType.BrickAmountUpgrade));
    }

    private void CreateItemButtonBool(Item.ItemType itemType, Sprite itemSprite, int itemCost, bool IsItemBought)
    {
        Transform shopItemTransform = Instantiate(_shopItemTemplate, _container);
        RectTransform shopItemRectTransform = shopItemTransform.GetComponent<RectTransform>();

        var textButton = shopItemTransform.Find("CostText").GetComponent<TextMeshProUGUI>();
        var coinImg = shopItemTransform.Find("CoinImage");

        _listofItemsTexts.Add(textButton);

        if (IsItemBought)
        {
            UpdateItemToOwned(textButton, coinImg);
            if (((int)itemType) == DataStorageManager.Instance.indexOfEquippedHat)
            {
                textButton.SetText("Equipped");
                switch (itemType)
                {
                    default:
                    case Item.ItemType.NoHat:
                        break;
                    case Item.ItemType.Hat1:
                        _playerDecorator.WearHat1();
                        break;
                    case Item.ItemType.Hat2:
                        _playerDecorator.WearHat2();
                        break;
                    case Item.ItemType.Hat3:
                        _playerDecorator.WearHat3();
                        break;
                }
            }
        }
        else 
        {
            textButton.SetText(itemCost.ToString());
        }

        shopItemTransform.Find("ItemImage").GetComponent<Image>().sprite = itemSprite;
        shopItemTransform.gameObject.SetActive(true);

        shopItemTransform.GetComponent<Button>().onClick.AddListener(() => TryBuyItem(itemType, textButton, coinImg)); 
    }

    private void CreateItemButtonInt(Item.ItemType itemType, Sprite itemSprite, int itemCost)
    {
        Transform shopItemTransform = Instantiate(_shopItemTemplate, _container);
        RectTransform shopItemRectTransform = shopItemTransform.GetComponent<RectTransform>();

        var textButton = shopItemTransform.Find("CostText").GetComponent<TextMeshProUGUI>();
        var coinImg = shopItemTransform.Find("CoinImage");

        textButton.SetText((itemCost * (DataStorageManager.Instance.indexOfCurrentUpgrade + 1)).ToString());
        shopItemTransform.Find("ItemImage").GetComponent<Image>().sprite = itemSprite;
        shopItemTransform.gameObject.SetActive(true);

        shopItemTransform.GetComponent<Button>().onClick.AddListener(() => TryBuyItem(itemType, textButton, coinImg));
    }

    private void TryBuyItem(Item.ItemType itemType, TextMeshProUGUI buttonText, Transform imgOfCoin)
    {
        var cost = Item.GetCost(itemType);

        switch (itemType)
        {
            default:
            case Item.ItemType.NoHat:
                _playerDecorator.WearNoHat();
                buttonText.SetText("Equipped");
                UpdateNewEquippedItem((int)Item.ItemType.NoHat);
                UpdateIndexEquippedItemDataStorage((int)Item.ItemType.NoHat);
                break;
            case Item.ItemType.Hat1:
                if (DataStorageManager.Instance.IsHat1Bought == true)
                {
                    buttonText.SetText("Equipped");
                    UpdateNewEquippedItem((int)Item.ItemType.Hat1);
                    UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat1);
                    _playerDecorator.WearHat1();
                }
                else
                {
                    if (AmountOfMoney >= cost)
                    {
                        AmountOfMoney -= cost;
                        _textOfWallet.SetText(AmountOfMoney.ToString());
                        DataStorageManager.Instance.IsHat1Bought = true;
                        _playerDecorator.WearHat1();
                        UpdateMoneyDataStorage();
                        UpdateItemBToEquipped(buttonText, imgOfCoin);
                        UpdateNewEquippedItem((int)Item.ItemType.Hat1);
                        UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat1);
                    }
                }
                break;
            case Item.ItemType.Hat2:
                if (DataStorageManager.Instance.IsHat2Bought == true)
                {
                    buttonText.SetText("Equipped");
                    UpdateNewEquippedItem((int)Item.ItemType.Hat2);
                    UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat2);
                    _playerDecorator.WearHat2();
                }
                else
                {
                    if (AmountOfMoney >= cost)
                    {
                        AmountOfMoney -= cost;
                        _textOfWallet.SetText(AmountOfMoney.ToString());
                        DataStorageManager.Instance.IsHat2Bought = true;
                        _playerDecorator.WearHat2();
                        UpdateMoneyDataStorage();
                        UpdateItemBToEquipped(buttonText, imgOfCoin);
                        UpdateNewEquippedItem((int)Item.ItemType.Hat2);
                        UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat2);
                    }
                }
                break;
            case Item.ItemType.Hat3:
                if (DataStorageManager.Instance.IsHat3Bought == true)
                {
                    buttonText.SetText("Equipped");
                    UpdateNewEquippedItem((int)Item.ItemType.Hat3);
                    UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat3);
                    _playerDecorator.WearHat3();
                }
                else
                {
                    if (AmountOfMoney >= cost)
                    {
                        AmountOfMoney -= cost;
                        _textOfWallet.SetText(AmountOfMoney.ToString());
                        DataStorageManager.Instance.IsHat3Bought = true;
                        _playerDecorator.WearHat3();
                        UpdateMoneyDataStorage();
                        UpdateItemBToEquipped(buttonText, imgOfCoin);
                        UpdateNewEquippedItem((int)Item.ItemType.Hat3);
                        UpdateIndexEquippedItemDataStorage((int)Item.ItemType.Hat3);
                    }
                }
                break;
            case Item.ItemType.BrickAmountUpgrade:
                var upgradeCost = (DataStorageManager.Instance.indexOfCurrentUpgrade + 1) * Item.GetCost(itemType);
                if (AmountOfMoney >= upgradeCost)
                {
                    AmountOfMoney -= upgradeCost;
                    _textOfWallet.SetText(AmountOfMoney.ToString());
                    DataStorageManager.Instance.indexOfCurrentUpgrade++;
                    _playerDecorator.SetupBrickLimit(DataStorageManager.Instance.indexOfCurrentUpgrade);
                    buttonText.SetText((Item.GetCost(itemType) * (DataStorageManager.Instance.indexOfCurrentUpgrade + 1)).ToString());
                    UpdateMoneyDataStorage();
                }
                break;
        }
    }

    public void AddMoney(int num)
    {
        AmountOfMoney += num;
        UpdateMoneyDataStorage();
    }

    private void UpdateNewEquippedItem(int indexOfEquipped)
    {
        for (int i = 0; i < _listofItemsTexts.Count; i++)
        {
            if(_listofItemsTexts[i].text == "Equipped")
            {
                _listofItemsTexts[i].SetText("Owned");
            }
        }

        _listofItemsTexts[indexOfEquipped].SetText("Equipped"); 
    }

    private void UpdateItemBToEquipped(TextMeshProUGUI buttonText, Transform imgOfCoin)
    {
        buttonText.SetText("Equipped");
        buttonText.GetComponent<RectTransform>().anchoredPosition = new Vector2(30f, -188);
        Destroy(imgOfCoin.gameObject);
    }

    private void UpdateItemToOwned(TextMeshProUGUI buttonText, Transform imgOfCoin)
    {
        buttonText.SetText("Owned");
        buttonText.GetComponent<RectTransform>().anchoredPosition = new Vector2(30f, -188);
        Destroy(imgOfCoin.gameObject);
    }

    private void UpdateMoneyDataStorage()
    {
        DataStorageManager.Instance.AmountOfMoney = AmountOfMoney;
        DataStorageManager.Instance.SaveNewData();
    }

    private void UpdateIndexEquippedItemDataStorage(int index)
    {
        DataStorageManager.Instance.indexOfEquippedHat = index;
        DataStorageManager.Instance.SaveNewData();
    }
}
