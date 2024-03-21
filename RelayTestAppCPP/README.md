# Relay Test App (Blueprint) Relay Test App CPP (C++ Only)

![RelayTestApp-GamePlay.png](Screenshots%2F%2FRelayTestApp-GamePlay.png)

## Summary

This simple "game" is used to demonstrate how to integrate with brainCloud's relay server. It is a simple multiplayer game where players can see each other's mouse move on the screen and create little shockwaves by clicking.

The game can be played by right clicking the RelayTestApp.uproject and Launch Game.

The mouse movement are sent using unreliable, ordered messages. The shockwaves are sent using reliable, unordered messages.

In Unreal Engine, the implementation uses WebSockets. Therefore, the unreliable messages are guaranteed reliable. But, the application can crossplay with other APIs (C#, Unity, Java, etc) which support unreliable UDP protocol.

## BP_RelayNetworkInterface.uasset (Blueprint) / RelayNetworkInterface class (C++)

BP_RelayNetworkInterface.uasset holds all the logic to communicate with brainCloud server and how to utilize the blueprint nodes with the brainCloud plugin. This includes the following (C++ follows the same workflow):

- Initialize brainCloud.
- Universal Authentication.
- Workflow to look for/create a lobby.
- Lobby callbacks.
- Users in lobby changing colour preference.
- Host can start the game for the lobby.
- Handling inputs from members both local and network members.
- Handling a user leaving a match or lobby.

## Possible Errors

If you are running on MacOS with xCode 13 and Unreal 4.27, you may see:

error: unknown warning option '-Wno-unused-but-set-variable'; did you mean '-Wno-unused-const-variable'? [-Werror,-Wunknown-warning-option]

In that case, remove the command from the files RelayTestApp.Target.cs and RelayTestAppEditor.Target.cs


