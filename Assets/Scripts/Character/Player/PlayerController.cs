using System;
using UnityEngine;
using UnityEngine.InputSystem.EnhancedTouch;

public class PlayerController : Controller
{
    [SerializeField] private PlayerMover _playerMover;
    [SerializeField] private PlayerInputController _playerInputController;
    [SerializeField] private PlayerAnimator _playerAnimator;

    public delegate void PlayerFall();
    public event PlayerFall OnPlayerFall;

    [Header("Audio of taking brick")]
    [SerializeField] private AudioClip _brickAudio;

    [Header("Audio of making step")]
    [SerializeField] private AudioClip _stepAudio;

    [Header("Audio of falling")]
    [SerializeField] private AudioClip _fallAudio;

    private AudioSource _audioSource;

    private PersonControl _playerInput;

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

    private void Awake()
    {
        _playerInput = new PersonControl();
    }

    void Start()
    {
        _animator = GetComponent<Animator>();
        _audioSource = GetComponent<AudioSource>();
        _characterController = GetComponent<CharacterController>();
        _playerMover.OnPlayerJump += PlayerJumpFinished;
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
                        IsFallMusicPlayed = false;

                    var movementVector = _playerInputController.CheckInput();
                    _playerMover.Move(movementVector);
                    _playerMover.UpdateGravity();
                    _playerAnimator.UpdateRunAnimation(movementVector);
                }
                else
                {
                    if (!IsFallMusicPlayed)
                    {
                        _audioSource.PlayOneShot(_fallAudio);
                        IsFallMusicPlayed = true;
                    }
                    _playerInputController.ResetInput();
                }
            }
            else
                _playerInputController.ResetInput();
            

            if (transform.position.y < -30)
                OnPlayerFall.Invoke();
            
        }
        else
            _playerInputController.ResetInput();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Jump"))
        {
            var pointDestination = other.GetComponent<PlayerJumpTrigger>().endPointTransform;
            IsJump = true;
            //_animator.SetBool("IsJump", IsJump);
            //StartCoroutine(Curve(1.5f, pointDestination.position));
            _playerAnimator.Jump(IsJump);
            _playerMover.Jump(pointDestination.position);
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

    public void UpdateManager(BrickManager brickManager)
    {
        _brickManager?.RemovePlayer();
        _brickManager = brickManager;
        _brickManager.AddNewPlayer();
    }

    protected override void UpdateRunAnimation()
    {
        /*var movementVector = _playerInputController.CheckInput();
        _animator.SetFloat("moveSpeed", movementVector.magnitude);*/
    }

    public override void StartWinAnimation()
    {
        _playerAnimator.WinAnimation();
    }

    private void PlayerJumpFinished()
    {
        IsJump = false;
        _playerAnimator.Jump(IsJump);
    }
}
