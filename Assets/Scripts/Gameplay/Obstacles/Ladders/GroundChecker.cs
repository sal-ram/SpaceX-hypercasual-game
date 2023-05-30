using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundChecker : MonoBehaviour
{
    [SerializeField] private LayerMask _groundMask;
    private bool OnLadder;

    private void OnCollisionStay(Collision collision)
    {
        Debug.Log(collision.gameObject.name);
        if (collision.gameObject.layer == 10)
        {
            OnLadder = true;
        }
        else 
        {
            OnLadder = false;
        }
    }

    public bool IsPlayerOnLadder()
    {
        return OnLadder;
    }
}
