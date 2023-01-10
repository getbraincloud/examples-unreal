# Unreal Examples

This repository contains example Unreal projects that use the brainCloud client. This is a good place to start learning how the various brainCloud APIs can be used.

## Instructions

### Clone:

The examples include the required plugins as git submodules.

```
$ git clone --recurse-submodules --branch develop git@github.com:getbraincloud/examples-unreal.git
```

If you are updating an existing repository, or forget to --recurse-submodules, then just update the modules. 
Make sure you've done this if you get "missing plugin" error on load.

```
$ cd examples-unreal
$ git submodule update --init --recursive
```

### Configure:

**Important** Requires configuration of ids.h header file in the project folder under Source/, which defines the server url, app id and app secret. This file is not included with the examples and loading, building and initializing will fail without it. Create a file into source code folder called ids.h, and put 3 defines in it:

```
#define BRAINCLOUD_SERVER_URL "https://api.braincloudservers.com/dispatcherV2"
#define BRAINCLOUD_APP_ID ""
#define BRAINCLOUD_APP_SECRET ""
```
Fill in values for BRAINCLOUD_APP_ID and BRAINCLOUD_APP_SECRET.

If you haven't signed up or you want to log into the brainCloud portal, you can do that here:

https://portal.braincloudservers.com/

### Build:

Open the uproject file in UE 4.27. It will inform that VaRest and BCClient modules are missing or unbuilt. Click YES to build. Click Show Log to see progress.

### Run:

Play in editor or launch standalone game.

## Standalone Client Lib

Find our latest releases of our Unreal client library [here](https://github.com/getbraincloud/braincloud-unreal-plugin-src).

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

### Possible Errors

If you are running on MacOS with xCode 13 and Unreal 4.27, you may see:
  ```
  error: unknown warning option '-Wno-unused-but-set-variable'; did you mean '-Wno-unused-const-variable'? [-Werror,-Wunknown-warning-option]
```
In that case, remove the command from the files RelayTestApp.Target.cs and RelayTestAppEditor.Target.