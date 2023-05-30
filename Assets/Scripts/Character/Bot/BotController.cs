using UnityEngine;
using UnityEngine.AI;
using System.Linq;
using System;

public class BotController : Controller
{
    [Header("Patrolling Path")]
    [SerializeField] private Transform[] wayPointsMassive;

    private NavMeshAgent agent;

    public LayerMask brickMask;
    private Vector3 brickPosition;

    [Header("Ladder")]
    [SerializeField] private LadderManager _bridgeManager;
    private Vector3 _positionOfStep;
    private Vector3 _positionOfFirstStep;
    private Vector3 _positionOfFirstStepTemp;

    [Header("ViewField")]
    [SerializeField] private float viewArea = 5f;
    private int indexOfWayPoint = 0;
    private float speed = 6;

    private int actualAmountOfRuns = 0;

    private bool IsPatrolling;
    private bool IsFoundBrick;
    private bool IsEnoughPacked;

    void Start()
    {
        _characterController = GetComponent<CharacterController>();
        _animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
        IsPatrolling = false;
        IsFoundBrick = false;
        IsEnoughPacked = false;
        CalculateIndexOfLayer();
        //Patrolling();
    }

    // Update is called once per frame
    void Update()
    {
        if (IsGameStarted)
        {
            if (!IsFall)
            {
                UpdateRunAnimation();

                if (IsPatrolling && agent.remainingDistance < 0.03)
                {
                    actualAmountOfRuns++;
                    Patrolling();
                }
                if ((IsPatrolling && !IsFoundBrick) || (IsEnoughPacked && !IsFoundBrick))
                {
                    LookForBricks();
                }
                if (!IsPatrolling && IsFoundBrick && !IsEnoughPacked)
                {
                    GoForBrick();
                }
            }
            else
            {
                agent.velocity = Vector3.zero;
            }
        }
        else
        {
            agent.velocity = Vector3.zero;
        }
    }

    private void Patrolling()
    {
        if (indexOfWayPoint == wayPointsMassive.Length)
        {
            indexOfWayPoint = 0;
        }

        var wayPoint = RandomWayPoint();

        agent.SetDestination(wayPointsMassive[wayPoint].position);

        var direction = wayPointsMassive[wayPoint].position - transform.position;
        agent.velocity = direction.normalized * speed;

        IsPatrolling = true;
    }

    private int RandomWayPoint()
    {
        return UnityEngine.Random.Range(0, wayPointsMassive.Length);
    }

    private void GoingToLadder()
    {
        var boolean = agent.SetDestination(_positionOfStep);
        var direction = _positionOfStep - transform.position;
        agent.velocity = direction.normalized * speed;
        IsEnoughPacked = true;
    }

    private void GoingToStartOfLadder()
    {
        actualAmountOfRuns = 0;
        agent.SetDestination(_positionOfFirstStepTemp);
        var direction = _positionOfFirstStepTemp - transform.position;
        agent.velocity = direction.normalized * speed;
        IsPatrolling = true;
    }

    private void LookForBricks()
    {
        Collider[] bricksAround = Physics.OverlapSphere(transform.position, viewArea, brickMask);

        if (bricksAround.Length > 0)
        {
            var bricksAroundOrdered = bricksAround.OrderBy(c => (transform.position - c.transform.position).sqrMagnitude).ToArray();
            brickPosition = bricksAroundOrdered[0].transform.position;
            IsFoundBrick = true;
            IsPatrolling = false;
        }
    }

    private void GoForBrick()
    {
        try
        {
            var direction = brickPosition - transform.position;
            var boolean = agent.SetDestination(brickPosition);
        }
        catch(Exception message)
        {
            Debug.Log(message);
        }
        IsFoundBrick = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(_brickCollector.brickTag))
        {
            other.GetComponent<ITriggerable>().OnTrigger();
            _brickCollector.AddBrick();
            _brickManager.AddNewFreeSpaceForBrick(_brickCollector.brickTag, other.transform.parent);

            if (_brickCollector.GetAmountOfBricks() > 5)
            {
                GoingToLadder();
            }
            else
            {
                Patrolling();
            }
        }

        if (other.CompareTag("Ladder"))
        {
            var triggerForUpdate = other.GetComponent<TriggerForUpdatingFirstPos>();
            _positionOfFirstStepTemp = triggerForUpdate.GetFirstStepPos();
        }

        if (other.CompareTag("Barrier"))
        {
            if (_brickCollector.GetAmountOfBricks() > 0)
            {
                var stepHandler = other.GetComponent<CollisionHandlerStep>();
                if (stepHandler.layerIndex == 0 || stepHandler.layerIndex != _layerOfBarrierIndex)
                {
                    DetectCollisionStep(stepHandler);
                    _brickManager.SpawnBrick(_brickCollector.brickTag);
                }
                _positionOfStep = stepHandler.linkToNextBarrier.position;
                GoingToLadder();
            }
            else
            {
                _positionOfStep = _positionOfFirstStep;
                GoingToStartOfLadder();
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
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
            }
        }
    }

    public void UpdateManagers(BrickManager brickManager, Transform[] wayPointsMassive, LadderManager bridgeManager)
    {
        actualAmountOfRuns = 0;
        _brickManager?.RemovePlayer();
        this._brickManager = brickManager;
        this._brickManager.AddNewPlayer();
        this.wayPointsMassive = wayPointsMassive;
        this._bridgeManager = bridgeManager;
        _positionOfStep = _bridgeManager.gameObject.transform.position;
        _positionOfFirstStep = _bridgeManager._firstChildPos;
        Patrolling();
    }

    protected override void UpdateRunAnimation()
    {
        _animator.SetFloat("moveSpeed", agent.velocity.magnitude);
    }

    public override void StartWinAnimation()
    {
        agent.enabled = false;
        _characterController.transform.rotation = new Quaternion(_characterController.transform.rotation.x, 180, _characterController.transform.rotation.z, _characterController.transform.rotation.w);
        _animator.SetBool("IsWin", true);
    }
}
