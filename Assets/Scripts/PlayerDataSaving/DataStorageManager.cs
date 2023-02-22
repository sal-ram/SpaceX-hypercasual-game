using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class DataStorageManager : MonoBehaviour
{
    public static DataStorageManager Instance;

    public int AmountOfMoney { get; set; }

    public bool IsHat1Bought;
    public bool IsHat2Bought;
    public bool IsHat3Bought;

    public int indexOfEquippedHat;

    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    [System.Serializable]
    class SaveData
    {
        public int AmountOfMoney = 200;

        public bool IsHat1Bought = false;
        public bool IsHat2Bought = false;
        public bool IsHat3Bought = false;

        public int indexOfEquippedHat = -1;
    }

    public void SaveNewData()
    {
        SaveData data = new();

        data.IsHat1Bought = IsHat1Bought;
        data.IsHat2Bought = IsHat2Bought;
        data.IsHat3Bought = IsHat3Bought;

        data.AmountOfMoney = AmountOfMoney;

        data.indexOfEquippedHat = indexOfEquippedHat;

        string json = JsonUtility.ToJson(data);

        File.WriteAllText(Application.persistentDataPath + "/savefile.json", json);
    }

    public void LoadData()
    {
        string path = Application.persistentDataPath + "/savefile.json";
        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            SaveData data = JsonUtility.FromJson<SaveData>(json);

            IsHat1Bought = data.IsHat1Bought;
            IsHat2Bought = data.IsHat2Bought;
            IsHat3Bought = data.IsHat3Bought;

            AmountOfMoney = data.AmountOfMoney;
            indexOfEquippedHat = data.indexOfEquippedHat;
        }
        else
        {
            SaveData data = new();

            IsHat1Bought = data.IsHat1Bought;
            IsHat2Bought = data.IsHat2Bought;
            IsHat3Bought = data.IsHat3Bought;

            AmountOfMoney = data.AmountOfMoney;
            indexOfEquippedHat = data.indexOfEquippedHat;
        }
    }
}
