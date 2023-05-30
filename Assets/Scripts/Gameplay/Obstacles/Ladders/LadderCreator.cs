using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class LadderCreator : MonoBehaviour
{
    [SerializeField] private GameObject _barrierObj;
    [SerializeField] private GameObject _railObj;
    [SerializeField] private int _lenghthOfLadder;
    [SerializeField] private Vector3 _offsetBetweenSteps;
    [SerializeField] private GameObject _endOfLadderPoint;
    [SerializeField] private GameObject _nexLevelPoint;
    [SerializeField] private float _railRotationAngle;
    private List<GameObject> _listOfSteps = new List<GameObject>();
    private GameObject prevStep = null;

    public delegate void LadderIsBuilded();
    public event LadderIsBuilded OnLadderIsBuilded;

    void Awake()
    {
        BuildLadder();
    }

    void BuildLadder()
    {
        for (int i = 0; i < _lenghthOfLadder - 1; i++)
        {
            var position = _offsetBetweenSteps * i;
            var step = Instantiate(_barrierObj, transform);
            step.transform.localPosition = position;

            _listOfSteps.Add(step.GetComponent<BarrierController>().step);

            var rail = Instantiate(_railObj, transform);
            rail.transform.localPosition = position + new Vector3(0, 2, 0);
            rail.transform.localEulerAngles= new Vector3(_railRotationAngle, 90, 0);

            if (i > 0)
            {
                prevStep.GetComponentInChildren<CollisionHandlerStep>().linkToNextBarrier = step.transform;
            }
            prevStep = step;
        }

        var endPointStart = Instantiate(_endOfLadderPoint, transform);
        endPointStart.transform.localPosition = prevStep.transform.localPosition + new Vector3(3, 0, 0);
        prevStep.GetComponentInChildren<CollisionHandlerStep>().linkToNextBarrier = _nexLevelPoint.transform;
        OnLadderIsBuilded.Invoke();
    }

    public void HideLadder()
    {
        for (int i = 0; i < _listOfSteps.Count; i++)
        {
            _listOfSteps[i].GetComponent<MeshRenderer>().enabled = false;
        }
    }
}
