# Unreal Examples

This repository contains example Unreal projects that use the brainCloud client. This is a good place to start learning how the various brainCloud APIs can be used.

### Instructions

Clone the repo, run the uproject file, run the project to play it in the editor!

### Standalone Client Lib

Find our latest releases of our Unreal client library [here](https://github.com/getbraincloud/braincloud-unreal).

## Relay Test App (Blueprint) Relay Test App CPP (C++ Only)

### Summary

This simple "game" is used to demonstrate how to integrate with brainCloud's relay server. It is a simple multiplayer game where players can see each other's mouse move on the screen and create little shockwaves by clicking.

The game can be played by right clicking the RelayTestApp.uproject and Launch Game.

The mouse movement are sent using unreliable, ordered messages. The shockwaves are sent using reliable, unordered messages.

In Unreal Engine, the implementation uses WebSockets. Therefore, the unreliable messages are guaranteed reliable. But, the application can crossplay with other APIs (C#, Unity, Java, etc) which support unreliable UDP protocol.

### BP_RelayNetworkInterface.uasset (Blueprint) / RelayNetworkInterface class (C++)

This is a Unreal blueprint example. BP_RelayNetworkInterface.uasset holds all the logic to communicate with brainCloud server and how to utilize the blueprint nodes with the brainCloud plugin. This includes the following: 

- Initialize brainCloud.
- Universal Authentication.
- Workflow to look for/create a lobby.
- Lobby callbacks.
- Users in lobby changing colour preference.
- Host can start the game for the lobby.
- Handling inputs from members both local and network members. 
- Handling a user leaving a match or lobby.
