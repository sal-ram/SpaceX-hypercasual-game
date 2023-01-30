using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUpdatable
{
    public void UpdateManagers(BrickManager brickManager);

    public void UpdateManagers(BrickManager brickManager, Transform[] wayPointsMassive);
}
