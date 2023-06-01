using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class PlayerController : Controller
{
    public delegate void PlayerFall();
    public event PlayerFall OnPlayerFall;

    [Header("Audio of taking brick")]
    [SerializeField] private AudioClip _brickAudio;

    [Header("Audio of making step")]
    [SerializeField] private AudioClip _stepAudio;

    [Header("Audio of falling")]
    [SerializeField] private AudioClip _fallAudio;

    private Vector3 _movementVector;
    private Vector2 _startPositionTouch;
    private Vector2 _inputVectorMovement;
    private AudioSource _audioSource;

    private PersonControl _playerInput;

    private readonly float _gravity = -9.81f;
    private readonly float _gravityScale = 5;
    private float _velocity;

    [Header("Speed of Player")]
    [SerializeField] private float _moveSpeed = 8;

    private bool IsFallMusicPlayed = false;

    public Transform HatPlace;

    private bool IsJump = false;
    public bool IsWin { get; private set; } = false;

    public AnimationCurve m_Curve = new AnimationCurve();

    private void OnDisable()
    {
        _playerInput.Disable();
        TouchSimulation.Disable();
        EnhancedTouchSupport.Disable();
    }

    private void OnEnable()
    {
        _playerInput.Enable();
        TouchSimulation.Enable();
        EnhancedTouchSupport.Enable();
    }

    // Start is called before the first frame update
    private void Awake()
    {
        _playerInput = new PersonControl();
    }

    void Start()
    {
        _animator = GetComponent<Animator>();
        _audioSource = GetComponent<AudioSource>();
        _characterController = GetComponent<CharacterController>();
        CalculateIndexOfLayer();
    }

    private void Update()
    {
        if (IsGameStarted)
        {
            if (!IsJump)
            {
                if (!IsFall)
                {
                    if (IsFallMusicPlayed)
                    {
                        IsFallMusicPlayed = false;
                    }
                    Move();
                    UpdateRunAnimation();
                }
                else
                {
                    if (!IsFallMusicPlayed)
                    {
                        _audioSource.PlayOneShot(_fallAudio);
                        IsFallMusicPlayed = true;
                    }
                    _movementVector = Vector3.zero;
                    _inputVectorMovement = Vector3.zero;
                }
            }
            else
            {
                _movementVector = Vector3.zero;
                _inputVectorMovement = Vector3.zero;
            }

            if (transform.position.y < -30)
            {
                OnPlayerFall.Invoke();
            }
        }
        else
        {
            _movementVector = Vector3.zero;
            _inputVectorMovement = Vector3.zero;
        }
    }

    void LateUpdate()
    {
        if(!IsJump)
            _characterController.Move(_moveSpeed * Time.deltaTime * _movementVector);
        if (_movementVector.magnitude > 0)
        {
            Quaternion rotation = Quaternion.LookRotation(_movementVector.normalized, Vector3.up);
            transform.rotation = rotation;
        }
    }

    private void Move()
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

        _movementVector = new Vector3(_inputVectorMovement.x, 0, _inputVectorMovement.y);

        _velocity += _gravity * _gravityScale * Time.deltaTime;

        if (_characterController.isGrounded && _velocity < 0)
        {
            _velocity = 0;
        }

        _characterController.Move(new Vector3(0, _velocity * Time.deltaTime, 0));
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Jump"))
        {
            var pointDestination = other.GetComponent<PlayerJumpTrigger>().endPointTransform;
            IsJump = true;
            _animator.SetBool("IsJump", IsJump);
            StartCoroutine(Curve(1.5f, pointDestination.position));
        }

        if (other.CompareTag(_brickCollector.brickTag))
        {
            if (_brickCollector.GetAmountOfBricks() <= limitOfBrickStorage)
            {
                _audioSource.PlayOneShot(_brickAudio);
                _brickCollector.AddBrick();
                _brickManager.AddNewFreeSpaceForBrick(_brickCollector.brickTag, other.transform.parent);
                other.GetComponent<ITriggerable>().OnTrigger();
            }
        }

        if (other.CompareTag("Barrier"))
        {
            var handler = other.GetComponent<CollisionHandlerStep>();

            if (_brickCollector.GetAmountOfBricks() > 0)
            {
                if (handler.layerIndex != _layerOfBarrierIndex)
                {
                    DetectCollisionStep(handler);
                    _audioSource.PlayOneShot(_stepAudio, 0.5f);
                    _brickManager.SpawnBrick(_brickCollector.brickTag);
                }
            }
        }

        if (other.CompareTag("BarrierBack"))
        {
            var handler = other.GetComponent<CollisionHandlerBack>();

            if (_layerOfBarrierIndex != handler.layerOfBarrierIndex)
            {
                var offset = handler.centerOfObj.z - other.ClosestPoint(transform.position).z;

                if (offset < 0)
                {
                    Physics.IgnoreLayerCollision(3, handler.layerOfBarrierIndex, true);
                }
            }
        }

        if (other.gameObject.layer == gameObject.layer)
        {
            var destroyHandler = other.gameObject.GetComponent<PlayersAppearingHandler>();
            destroyHandler.OnTrigger();
        }

        if (other.gameObject.CompareTag("KnockoutChecker") && IsPlayerGrounded())
        {
            try
            {
                var knockoutHandler = other.gameObject.GetComponent<KnockoutChecker>();
                InvokeCollisionWithPlayerHandler(knockoutChecker.nameOfColor, knockoutHandler.nameOfColor);
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
            }
        }

        if (other.gameObject.CompareTag("Finish"))
        {
            try
            {
                InvokeReachingFinish();
                Destroy(other.gameObject);
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Barrier"))
        {
            var handler = other.GetComponent<CollisionHandlerStep>();
            if (handler.layerIndex != _layerOfBarrierIndex)
            {
                var offset = handler.centerOfObj.z - other.ClosestPoint(transform.position).z;

                if (offset > 0)
                {
                    Physics.IgnoreLayerCollision(3, handler.layerIndex, false);
                }
            }
        }
    }

    IEnumerator Curve(float duration, Vector3 endPosition)
    {
        _characterController.enabled = false;

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
        _animator.SetBool("IsJump", IsJump);
    }

    public void UpdateManager(BrickManager brickManager)
    {
        _brickManager?.RemovePlayer();
        _brickManager = brickManager;
        _brickManager.AddNewPlayer();
    }

    protected override void UpdateRunAnimation()
    {
        _animator.SetFloat("moveSpeed", _movementVector.magnitude);
    }
    public override void StartWinAnimation()
    {
        _characterController.transform.rotation = new Quaternion(_characterController.transform.rotation.x, 180, _characterController.transform.rotation.z, _characterController.transform.rotation.w);
        _animator.SetBool("IsWin", true);
    }
}
