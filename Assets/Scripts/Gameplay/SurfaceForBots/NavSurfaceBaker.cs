using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavSurfaceBaker : MonoBehaviour
{
    [SerializeField] private List<NavMeshSurface> surfaces;

     // Start is called before the first frame update
    void Start()
    {
        
    }

    public void BuildNavMesh()
    {
        for (int i = 0; i < surfaces.Count; i++)
        {
            surfaces[i].BuildNavMesh();
        }
    }

    public void AddSurface(NavMeshSurface surface)
    {
        surfaces.Add(surface);
    }

    public void RemoveSurface(NavMeshSurface surface)
    {
        surfaces.Remove(surface);
    }

}
