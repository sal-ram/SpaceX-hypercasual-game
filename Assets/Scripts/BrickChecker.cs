using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public class BrickChecker : MonoBehaviour, ITriggerable
{
    [SerializeField] private GameObject _stepObj;
    [SerializeField] private GameObject _barrierObj;

    public void Destroy()
    {
        throw new System.NotImplementedException();
    }

    //public NavMeshSurface surface;

    public void OnDestroy()
    {
        Destroy(_barrierObj);
    }

    public void OnTrigger()
    {
        //Debug.Log(2);
        Instantiate(_stepObj, transform.parent);
        OnDestroy();
    }
}
