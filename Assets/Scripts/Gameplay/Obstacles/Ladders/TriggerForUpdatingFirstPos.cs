using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerForUpdatingFirstPos : MonoBehaviour
{
    [SerializeField] private LadderManager _ladderManager;

    public Vector3 GetFirstStepPos()
    {
        return _ladderManager._firstChildPos;
    }
}
