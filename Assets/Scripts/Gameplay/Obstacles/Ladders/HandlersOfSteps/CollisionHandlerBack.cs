using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandlerBack : MonoBehaviour
{
    [SerializeField] private GameObject _barrierObj;
    public int layerOfBarrierIndex {get; set;}
    public Vector3 centerOfObj { get; private set; }

    private void Awake()
    {
        centerOfObj = transform.TransformPoint(gameObject.GetComponent<BoxCollider>().center);
        layerOfBarrierIndex = _barrierObj.layer;
    }
}
