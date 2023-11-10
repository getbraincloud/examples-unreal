# Unreal Examples

This repository contains example Unreal projects that use the brainCloud client. This is a good place to start learning how the various brainCloud APIs can be used.

## Instructions

### Clone:

The examples include the required plugins as git submodules.

```
$ git clone --recurse-submodules https://github.com/getbraincloud/examples-unreal.git
```

If you are updating an existing repository then just update the modules. Do this if you get "missing plugin" error on load.

```
$ cd examples-unreal
$ git submodule update --init
```

For development get the latest code on your working plugin branch. Eg.

```
$ git submodule update --remote
```

You can modify the submodule to lock into a particular branch. Eg.

```
$ git submodule set-branch --default RelayTestApp/Plugins/BCClient
$ git submodule set-branch --branch release/5.0 RelayTestApp/Plugins/BCClient
$ git submodule set-branch --branch develop RelayTestApp/Plugins/BCClient
```

### Configure:

**Important** Requires configuration of **BrainCloudSettings.ini** file in the project folder under Config/, which defines the server url, app id and app secret. Initializing and connecting will fail without it.

```
[Credentials]
AppId=12345
AppSecret=[from portal]
ServerUrl=https://api.internal.braincloudservers.com/dispatcherv2
```
Fill in values for AppId and AppSecret. You can find this information on the brainCloud portal. If you haven't signed up or you want to log into the brainCloud portal, you can do that here:

https://portal.braincloudservers.com/

### Build:

Required for some examples: add the VaREST plugin to your engine from Epic Launcher or download to Plugins folder.

Open the .uproject file in Unreal Engine. It will inform that the BCClient module is missing or unbuilt. Click YES to build. Click Show Log to see progress.

To generate project files, use the built in menu option or UE command:

```angular2html
Mac: "${UE_INSTALL_PATH}/Engine/Build/BatchFiles/Mac/GenerateProjectFiles.sh" -projectfiles -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -game -rocket -progress
Windows: "%UE_INSTALL_PATH%\Engine\Binaries\DotNet\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress 
```

To package refer to script autobuild/makebuild.sh and autobuild\makebuild.bat.

```angular2html
export UE_VERSION=5.1
export UE_EDITOR_CMD='UnrealEditor-Cmd'
export UE_INSTALL_PATH='/Users/Shared/Epic Games/UE_5.1'
```

#### UE 4 Examples

There is a separate branch for working in Unreal Engine 4. It will work with the same/latest plugin. To switch, you will need to clean build directories and copy new ids files.

```angular2html
git checkout ue4-examples
```

### Run:

Play in editor or launch standalone game. Examples can be packaged for Mac or Windows PC, IOS or Android.

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

 error: unknown warning option '-Wno-unused-but-set-variable'; did you mean '-Wno-unused-const-variable'? [-Werror,-Wunknown-warning-option]

In that case, remove the command from the files RelayTestApp.Target.cs and RelayTestAppEditor.Target.cs

## Tappy Chicken
Based on Unreal's' demo. Shows 

* Achievements
* Leaderboards
* User Entities

## ScriptTestApp (blueprint only)
Implements [CloudCode Tutorial 1 and 6](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/):
- #1 Your First Script and 
- #6 S2S Scripts.

Requires a script on the server for App ID (included).

Uses MobileStarterContent. If you load in UE 5 + you may see an error similar to: 

Failed to import '/Users/Shared/Epic Games/UE_5.1/FeaturePacks/MobileStarterContent.upack'. Failed to create asset '/Game/MobileStarterContent'. Please see Output Log for details.

Workaround: copy the installed upack file. 

```
cd "$UE_INSTALL_PATH"
cp StarterContent.upack MobileStarterContent.upack
```

## Leaderboard
Implements [CloudCode Tutorial 2 and 4](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/): 
- #2 Making API Calls and
- #4 Pre and Post Hooks.

## Groups
Implements [CloudCode Tutorial 3-6](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/) :
- #3 Working with Global and User Entities 
- #4 Pre and Post Hooks 
- #5 External Web Services and 
- #6 S2S Scripts.
