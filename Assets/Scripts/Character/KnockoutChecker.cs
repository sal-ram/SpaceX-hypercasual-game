using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KnockoutChecker : MonoBehaviour
{
    public delegate void CharactersCollision(int numOfBricks);
    public event CharactersCollision OnCharactersCollision;

    public string nameOfColor; 

    public void OnTrigger(int numOfBricks)
    {
        OnCharactersCollision.Invoke(numOfBricks);
    }
}
