using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAnimator : MonoBehaviour
{
    private CharacterController _characterController;
    private Animator _animator;

    // Start is called before the first frame update
    void Start()
    {
        _characterController = GetComponent<CharacterController>();
        _animator = GetComponent<Animator>();
    }

    public void Jump(bool IsJump)
    {
        _animator.SetBool("IsJump", IsJump);
    }

    public void UpdateRunAnimation(Vector3 movementVector)
    {
        _animator.SetFloat("moveSpeed", movementVector.magnitude);
    }

    public void WinAnimation()
    {
        _characterController.transform.rotation = new Quaternion(_characterController.transform.rotation.x, 180, _characterController.transform.rotation.z, _characterController.transform.rotation.w);
        _animator.SetBool("IsWin", true);
    }
}
