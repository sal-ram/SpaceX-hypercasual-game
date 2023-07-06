using UnityEngine;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class PlayerInputController : MonoBehaviour
{
    private Vector2 _startPositionTouch;
    private Vector2 _inputVectorMovement;

    public Vector3 CheckInput()
    {
        if (Touch.activeFingers.Count == 1)
        {
            if (Touch.activeFingers[0].currentTouch.phase == UnityEngine.InputSystem.TouchPhase.Began)
            {
                _startPositionTouch = Touch.activeFingers[0].currentTouch.screenPosition;
            }

            if (Touch.activeFingers[0].currentTouch.phase == UnityEngine.InputSystem.TouchPhase.Moved || Touch.activeFingers[0].currentTouch.phase == UnityEngine.InputSystem.TouchPhase.Stationary)
            {
                if (Vector2.Distance(Touch.activeFingers[0].currentTouch.screenPosition, _startPositionTouch) > 0)
                {
                    _inputVectorMovement = (Touch.activeFingers[0].currentTouch.screenPosition - _startPositionTouch);
                    _inputVectorMovement.Normalize();
                }
                else
                {
                    _inputVectorMovement = Vector2.zero;
                }
            }

            if (Mathf.Abs(_inputVectorMovement.x) < 0.1f && Mathf.Abs(_inputVectorMovement.y) < 0.1f)
            {
                _inputVectorMovement = Vector2.zero;
            }

            if (Touch.activeFingers[0].currentTouch.phase == UnityEngine.InputSystem.TouchPhase.Ended)
            {
                _inputVectorMovement = Vector2.zero;
            }
        }

        return new Vector3(_inputVectorMovement.x, 0, _inputVectorMovement.y);
    }

    public void ResetInput()
    {
        _inputVectorMovement = Vector3.zero;
        _startPositionTouch = Vector3.zero;
    }
}
