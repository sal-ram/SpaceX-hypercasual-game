using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameAssets : MonoBehaviour
{
    private static GameAssets _instance;

    public static GameAssets Instance
    {
        get
        {
            if (_instance == null) _instance = (Instantiate(Resources.Load("GameAssets")) as GameObject).GetComponent<GameAssets>();
            return _instance;
        }
    }

    public Sprite NoHat;
    public Sprite Hat1;
    public Sprite Hat2;
    public Sprite Hat3;
    public Sprite BrickAmountUpgrade;
}
