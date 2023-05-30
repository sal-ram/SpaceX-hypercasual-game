using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class CollisionPlayersManager : MonoBehaviour
{
    private PlayerController _player;

    [Inject(Id = "BotYellow")]
    private BotController _botYellow;
    [Inject(Id = "BotGreen")]
    private BotController _botGreen;
    [Inject(Id = "BotPink")]
    private BotController _botPink;

    private bool YellowRedCollision = false;
    private bool YellowPinkCollision = false;
    private bool YellowGreenCollision = false;
    private bool RedGreenCollision = false;
    private bool RedPinkCollision = false;
    private bool PinkGreenCollision = false;

    [Inject]
    private void Construct(PlayerController playerController)
    {
        _player = playerController;
    }

    private void Awake()
    {
        _player.OnCollisionWithPlayer += CheckCollision;
        _botYellow.OnCollisionWithPlayer += CheckCollision;
        _botGreen.OnCollisionWithPlayer += CheckCollision;
        _botPink.OnCollisionWithPlayer += CheckCollision;
    }

    private void CheckCollision(string firstPlayerName, string secondPlayerName)
    {
        if (firstPlayerName == "Yellow" && secondPlayerName == "Red" )
        {
            if (YellowRedCollision == false)
            {
                YellowRedCollision = true;
                CheckKnockout(_player, _botYellow, ref YellowRedCollision);
            }
        }

        if (firstPlayerName == "Yellow" && secondPlayerName == "Pink")
        {
            if (YellowPinkCollision == false)
            {
                YellowPinkCollision = true;
                CheckKnockout(_botPink, _botYellow, ref YellowPinkCollision);
            }
        }

        if (firstPlayerName == "Yellow" && secondPlayerName == "Green")
        {
            if (YellowGreenCollision == false)
            {
                YellowGreenCollision = true;
                CheckKnockout(_botGreen, _botYellow, ref YellowGreenCollision);
            }
        }

        if (firstPlayerName == "Green" && secondPlayerName == "Red")
        {
            if (RedGreenCollision == false)
            {
                RedGreenCollision = true;
                CheckKnockout(_player, _botGreen, ref RedGreenCollision);
            }
        }

        if (firstPlayerName == "Pink" && secondPlayerName == "Red")
        {
            if (RedPinkCollision == false)
            {
                RedPinkCollision = true;
                CheckKnockout(_botPink, _player, ref RedPinkCollision);
            }
        }

        if (firstPlayerName == "Pink" && secondPlayerName == "Green")
        {
            if (PinkGreenCollision == false)
            {
                PinkGreenCollision = true;
                CheckKnockout(_botPink, _botGreen, ref PinkGreenCollision);
            }
        }
    }
    
    private void CheckKnockout(Controller playerOne, Controller playerTwo, ref bool CollisionState)
    {
        var numOfBricksPlayerOne = playerOne.GetAmountOfBricksOnPlayer();
        var numOfBricksPlayerTwo = playerTwo.GetAmountOfBricksOnPlayer();

        if (numOfBricksPlayerOne < numOfBricksPlayerTwo && !playerOne.Unfallable)
        {
            playerOne.Fall(numOfBricksPlayerOne);
        }
        else if (numOfBricksPlayerOne > numOfBricksPlayerTwo && !playerTwo.Unfallable)
        {
            playerTwo.Fall(numOfBricksPlayerOne);
        }

        CollisionState = false;
    }
}
