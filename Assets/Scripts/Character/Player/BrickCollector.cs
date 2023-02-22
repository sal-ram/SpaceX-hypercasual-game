using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BrickCollector : MonoBehaviour
{
    [SerializeField] private GameObject _brickObject;
    [SerializeField] private Transform startPosition;

    private List<GameObject> listOfBricks = new List<GameObject>();
    private int amountOfBricks;

    private GameObject brick;
    public string brickTag {get; private set;}
    public Color brickColor { get; private set;}

    private Vector3 offsetBetweenBricks = new Vector3(0, 0.6f, 0);

    private void Awake()
    {
        brickColor = _brickObject.GetComponent<Renderer>().sharedMaterial.color;
        brickTag = _brickObject.tag;
    }

    // Start is called before the first frame update
    public void AddBrick()
    {
        amountOfBricks = GetAmountOfBricks();

        if (amountOfBricks == 0)
        {
            brick = Instantiate(_brickObject, startPosition);
            brick.transform.parent = startPosition;
            listOfBricks.Add(brick);
        }
        else
        {
            var offset = offsetBetweenBricks * amountOfBricks;
            brick = Instantiate(_brickObject, startPosition);
            brick.transform.localPosition = offset;
            listOfBricks.Add(brick);
        }
    }

    public void DeleteBrick()
    {
        //amountOfBricks = GetAmountOfBricks();

        amountOfBricks = listOfBricks.Count;

        if (amountOfBricks > 0)
        {
            //Debug.Log(amountOfBricks);
            //var child = startPosition.GetChild(amountOfBricks - 1);
            var child = listOfBricks[amountOfBricks - 1];
            child.GetComponent<CollisionHandlerBrick>().Destroy();
            listOfBricks.RemoveAt(amountOfBricks - 1);
        }
    }

    public int GetAmountOfBricks()
    {
        return startPosition.childCount;
    }
}
