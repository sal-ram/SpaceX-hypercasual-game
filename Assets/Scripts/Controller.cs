using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public abstract class Controller : MonoBehaviour
{
    protected Animator _animator;
    protected CharacterController _characterController;

    protected bool IsFall = false;
    public bool Unfallable = false;
    public bool IsGameStarted = false;

    [Header("Ground Layer Mask")]
    [SerializeField] protected LayerMask groundMask;

    [Header("Which Layer is barrier placed")]
    [SerializeField] protected LayerMask _layerOfBarrier;

    protected int _layerOfBarrierIndex;

    [Header("Brick Collector")]
    [SerializeField] protected BrickCollector _brickCollector;
    [Header("Brick Manager")]
    [SerializeField] protected BrickManager _brickManager;

    [Header("Knockout check")]
    [SerializeField] protected KnockoutChecker knockoutChecker;

    [Header("Ground Checker")]
    [SerializeField] protected Transform _groundChecker;

    public delegate void CollisionWithPlayer(string ownName, string otherName);
    public event CollisionWithPlayer OnCollisionWithPlayer;

    public delegate void ReachFinish(string name);
    public event ReachFinish OnReachFinish;

    protected void CalculateIndexOfLayer()
    {
        _layerOfBarrierIndex = (int)Mathf.Log(_layerOfBarrier.value, 2);
    }

    public void Fall(int numOfBricks)
    {
        IsFall = true;
        Unfallable = true; 
        _animator.SetBool("IsFall", IsFall);
        Invoke(nameof(Fall), 2.0f);
        Invoke(nameof(DeactivateImmunitete), 8.0f);
        while (numOfBricks >= 0)
        {
            try
            {
                _brickCollector.DeleteBrick();
                _brickManager.SpawnBrick(_brickCollector.brickTag);
                numOfBricks--;
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
            }
        }
    }

    protected abstract void UpdateAnimation();

    protected void InvokeReachingFinish(string name)
    {
        OnReachFinish.Invoke(name);
    }

    protected void DetectCollisionStep(CollisionHandlerStep stepHandler)
    {
        stepHandler.colorOfStep = _brickCollector.brickColor;
        stepHandler.layerIndex = _layerOfBarrierIndex;
        stepHandler.OnTrigger();

        _brickCollector.DeleteBrick();
       // _surfaceBaker.BuildNavMesh();
    }

    protected void InvokeCollisionWithPlayerHandler(string ownName, string otherName)
    {
        OnCollisionWithPlayer.Invoke(ownName, otherName);
    }

    public int GetAmountOfBricksOnPlayer()
    {
        return _brickCollector.GetAmountOfBricks();
    }

    protected void Fall()
    {
        IsFall = false;
        _animator.SetBool("IsFall", IsFall);
    }

    protected void DeactivateImmunitete()
    {
        Unfallable = false;
    }

    protected bool IsPlayerGrounded()
    {
        var collider = Physics.OverlapSphere(_groundChecker.position, 0.5f, groundMask);
        if (collider.Length > 0)
        {
            return true;
        }

        return false;
    }
}
