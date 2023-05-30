using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class SurfaceManager : MonoBehaviour
{
    public NavMeshSurface surfaceOfAllLevel;
    public List<LadderCreator> LadderList;
    private int counterOfBuildedLadders = 0;

    private void Awake()
    {
        for (int i = 0; i < LadderList.Count; i++)
        {
            LadderList[i].OnLadderIsBuilded += CheckIsAllLaddersBuilded;
        }
    }

    private void CheckIsAllLaddersBuilded()
    {
        counterOfBuildedLadders++;

        if(counterOfBuildedLadders == LadderList.Count)
        {
            surfaceOfAllLevel.BuildNavMesh();
            HideLadders();
        }
    }

    private void HideLadders()
    {
        for (int i = 0; i < LadderList.Count; i++)
        {
            LadderList[i].HideLadder();
        }
    }
}
