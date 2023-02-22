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

    }
    

    public void OnTrigger()
    {
        gameObject.SetActive(false);
    }
}
