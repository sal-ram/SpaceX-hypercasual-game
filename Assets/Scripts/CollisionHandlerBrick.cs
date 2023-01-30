using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandlerBrick : MonoBehaviour, ITriggerable
{
    public void Destroy()
    {
        Destroy(gameObject);
    }

    public void OnDestroy()
    {
        //Destroy(gameObject);
    }
    

    public void OnTrigger()
    {
        //OnDestroy();
        gameObject.SetActive(false);
    }
}
