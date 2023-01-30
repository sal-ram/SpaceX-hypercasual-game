using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item
{
    public enum ItemType
    {
        NoHat,
        Hat1,
        Hat2, 
        Hat3
    }

    public static int GetCost(ItemType itemType)
    {
        switch (itemType)
        {
            default:
            case ItemType.NoHat: return 0;
            case ItemType.Hat1: return 100;
            case ItemType.Hat2: return 150;
            case ItemType.Hat3: return 200;
        }
    }

    public static Sprite GetSprite(ItemType itemType)
    {
        switch (itemType)
        {
            default:
            case ItemType.NoHat: return GameAssets.Instance.NoHat;
            case ItemType.Hat1: return GameAssets.Instance.Hat1;
            case ItemType.Hat2: return GameAssets.Instance.Hat2;
            case ItemType.Hat3: return GameAssets.Instance.Hat3;
        }
    }
}
