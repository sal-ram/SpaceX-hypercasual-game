using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class PlayerInstaller : MonoInstaller
{
    public Transform StartPoint;
    public Transform topicParentForPlayer;
    public GameObject CharacterPrefab;

    public override void InstallBindings()
    {
        BindPlayer();
    }

    private void BindPlayer()
    {
        PlayerController playerController = Container
            .InstantiatePrefabForComponent<PlayerController>(CharacterPrefab, StartPoint.position, Quaternion.identity, topicParentForPlayer);

        Container
            .Bind<PlayerController>()
            .FromInstance(playerController)
            .AsSingle();
    }
}