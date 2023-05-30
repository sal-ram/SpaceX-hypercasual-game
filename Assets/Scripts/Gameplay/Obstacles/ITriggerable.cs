using System.Collections;
using System.Collections.Generic;
using UnityEngine;

interface ITriggerable
{
    void OnTrigger();
    void OnDestroy();
    void Destroy();
}
