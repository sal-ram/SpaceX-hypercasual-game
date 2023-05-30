using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public class BotsInstaller : MonoInstaller
{
    public BotController BotPinkPrefab;
    public BotController BotYellowPrefab;
    public BotController BotGreenPrefab;

    public List<Transform> ListOfStartPoints;
    public Transform topicParentForBot;

    public override void InstallBindings()
    {
        BindPinkBot();
        BindYellowBot();
        BindGreenBot();
    }

    private void BindPinkBot()
    {
        BotController botPinkController = Container
           .InstantiatePrefabForComponent<BotController>(BotPinkPrefab, ListOfStartPoints[0].position, Quaternion.identity, topicParentForBot);

        Container
           .Bind<BotController>()
           .WithId("BotPink")
           .FromInstance(botPinkController);
    }

    private void BindYellowBot()
    {
        BotController botYellowController = Container
            .InstantiatePrefabForComponent<BotController>(BotYellowPrefab, ListOfStartPoints[1].position, Quaternion.identity, topicParentForBot);

        Container
          .Bind<BotController>()
          .WithId("BotYellow")
          .FromInstance(botYellowController);
    }

    private void BindGreenBot()
    {
        BotController botGreenController = Container
          .InstantiatePrefabForComponent<BotController>(BotGreenPrefab, ListOfStartPoints[2].position, Quaternion.identity, topicParentForBot);

        Container
          .Bind<BotController>()
          .WithId("BotGreen")
          .FromInstance(botGreenController);
    }
}