using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartUpManager : MonoBehaviour
{
    private int _indexCurrentLevel;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(Application.persistentDataPath);
        DataStorageManager.Instance.LoadData();
        _indexCurrentLevel = DataStorageManager.Instance.indexOfCurrentLevel;
        AddressablesLoader.Instance.LoadNewLevelAsync(_indexCurrentLevel);
    }
}
