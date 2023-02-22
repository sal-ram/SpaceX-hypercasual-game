using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandlerStep : MonoBehaviour, ITriggerable
{
    [SerializeField] private GameObject _stepObj;
    [SerializeField] private GameObject _barrierObj;
    [SerializeField] private CollisionHandlerBack _backObj;
    public GameObject step;
    public int layerIndex { get; set; }
    public Transform linkToNextBarrier;
    public Vector3 centerOfObj { get; private set; }
    public Color colorOfStep { get; set; }

    private void Awake()
    {
        centerOfObj = transform.TransformPoint(gameObject.GetComponent<BoxCollider>().center);
        layerIndex = 0;
    }

    public void OnDestroy()
    {
        _barrierObj.layer = layerIndex;
        _backObj.layerOfBarrierIndex = layerIndex;
    }

    public void OnTrigger()
    {
        var meshOfStep = step.GetComponent<MeshRenderer>();

        if (meshOfStep.enabled == false)
        {
            meshOfStep.enabled = true;
        }

        step.GetComponent<Renderer>().material.color = colorOfStep;
        OnDestroy();
    }

    public void MakeBarrierActive()
    {
        _barrierObj.SetActive(true);
    }

    public void Destroy()
    {
        throw new System.NotImplementedException();
    }
}
