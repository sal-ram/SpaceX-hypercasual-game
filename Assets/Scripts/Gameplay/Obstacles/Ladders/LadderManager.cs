using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LadderManager : MonoBehaviour
{
    public Vector3 _firstChildPos { get; private set; }

    // Start is called before the first frame update
    void Start()
    {
       _firstChildPos = transform.GetChild(0).position;
    }
}
