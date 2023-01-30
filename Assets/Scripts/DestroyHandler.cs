using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyHandler : MonoBehaviour
{
    public delegate void CharacterAppeared(string name);
    public event CharacterAppeared OnCharacterAppeared;

    public string BotDestroyerName;

    public void OnTrigger()
    {
        try
        {
            OnCharacterAppeared.Invoke(BotDestroyerName);
            Destroy(gameObject);
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
        }
    }
}
