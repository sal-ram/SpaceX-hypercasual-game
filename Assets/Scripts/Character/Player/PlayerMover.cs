using System.Collections;
using UnityEngine;

public class PlayerMover : MonoBehaviour
{
    private CharacterController _characterController;
    private readonly float _gravity = -9.81f;
    private readonly float _gravityScale = 5;
    private float _velocity;
    private float _moveSpeed = 10;
    public bool IsJump { get; private set; } = false;
    public AnimationCurve m_Curve = new AnimationCurve();

    public delegate void PlayerJump();
    public event PlayerJump OnPlayerJump;

    // Start is called before the first frame update
    void Start()
    {
        _characterController = GetComponent<CharacterController>();
    }

    public void Move(Vector3 movementVector)
    {
        _characterController.Move(_moveSpeed * Time.deltaTime * movementVector);

        if (movementVector.magnitude > 0)
        {
            Quaternion rotation = Quaternion.LookRotation(movementVector.normalized, Vector3.up);
            transform.rotation = rotation;
        }
    }

    public void UpdateGravity()
    {
        _velocity += _gravity * _gravityScale * Time.deltaTime;

        if (_characterController.isGrounded && _velocity < 0)
        {
            _velocity = 0;
        }

        _characterController.Move(new Vector3(0, _velocity * Time.deltaTime, 0));
    }

    public void Jump(Vector3 pointDestination)
    {
        StartCoroutine(Curve(1.5f, pointDestination));
    }

    IEnumerator Curve(float duration, Vector3 endPosition)
    {
        _characterController.enabled = false;
        IsJump = true;
        Vector3 startPos = transform.position;
        Vector3 endPos = endPosition + Vector3.up;
        float normalizedTime = 0.0f;
        while (normalizedTime < 1.0f)
        {
            float yOffset = m_Curve.Evaluate(normalizedTime);
            transform.position = Vector3.Lerp(startPos, endPos, normalizedTime) + yOffset * Vector3.up;
            normalizedTime += Time.deltaTime / duration;
            yield return null;
        }
        _characterController.enabled = true;
        IsJump = false;

        OnPlayerJump?.Invoke();
    }
}
