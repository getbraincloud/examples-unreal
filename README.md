# brainCloud Unreal Examples

This repository contains example Unreal projects that use the brainCloud client. This is a good place to start learning how the various brainCloud APIs can be used.

Read the latest [brainCloud Docs](https://docs.braincloudservers.com/) on developing with brainCloud  - including feature overviews, how-to's, [API references](https://docs.braincloudservers.com/learn/api-reference/) and [video tutorials](https://bootcamp.braincloudservers.com/).

## Instructions

### 1. Clone

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

### 2. Configure

**Important** Requires configuration of **BrainCloudSettings.ini** file in the project folder under Config/, which defines the server url, app id and app secret. Initializing and connecting will fail without it.

```
[Credentials]
AppId=12345
AppSecret=[GUID from Portal]
ServerUrl=https://api.braincloudservers.com/dispatcherv2
```
Fill in values for AppId and AppSecret. You can find this information on the brainCloud portal. If you haven't signed up or you want to log into the brainCloud portal, you can do that here:

https://portal.braincloudservers.com/

### 3. Build

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

#### UE 4

There is one example ready-to-build in Unreal Engine 4.27. Note that brainCloud blueprint and c++ code are consistent between all engine versions so all examples are still applicable. Legacy versions of examples can also be found in

```angular2html
git checkout ue4-examples
```

### 4. Run

Play in editor or launch standalone game. Examples can be packaged for Mac or Windows PC, IOS or Android.

## Installing brainCloud Plugin

Find our latest releases of our Unreal client library [here on GitHub](https://github.com/getbraincloud/braincloud-unreal-plugin).

# About the examples

Refer to README.md file in each game project folder. There are useful build scripts located in autobuild folder. Also, see LICENSE.md in the main folder.

## [Relay Test App Blueprint](RelayTestApp) and [C++ Version](RelayTestAppCPP)

The simple "game" Cursor Party is used to demonstrate how to integrate with brainCloud's relay server.

## [brainCloud Chat](BCChat)

A demonstration of a cross-platform multi-channel RTT chat app.

## [brainCloud Relay Blast](BCFPS)

A demonstration of integration of real-time websocket network technology for multi-player gameplay in a first person shooter.

[![BCFPS-GamePlay.png](BCFPS%2F%2FScreenshots%2F%2FBCFPS-GamePlay.png)](https://getbraincloud.com/demos/#unreal-section)

[Play live now!](https://getbraincloud.com/demos/#unreal-section)

## [Hello brainCloud!](MobileTestApp) and [UE 4.27 Version](MobileTestAppUE4)

Lightweight app to install on devices (Mobile, Console, etc) and set up to run user defined code/blueprint. There are versions for UE 5.3 and for UE 4.27.

## [Tappy Chicken](TappyChicken)

2D scroller based on the Epic original demonstrating a lot of brainCloud features in blueprint.

[![TappyChicken-GamePlay.png](TappyChicken%2F%2FScreenshots%2F%2FTappyChicken-GamePlay.png)](https://getbraincloud.com/demos/#unreal-section)

[Play live now!](https://getbraincloud.com/demos/#unreal-section)

## [Script Test App](ScriptTestApp)
Implements [CloudCode Tutorial 1 and 6](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/)

## [brainCloud Target Practice](Leaderboard)
Implements [CloudCode Tutorial 2 and 4](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/)

[![Leaderboard-GamePlay.png](Leaderboard%2F%2FScreenshots%2F%2FLeaderboard-GamePlay.png)](https://getbraincloud.com/demos/#unreal-section)

[Play live now!](https://getbraincloud.com/demos/#unreal-section)

## [Groups](Groups)

Implements [CloudCode Tutorial 3-6](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/)

## Another github repo: [braincloud Blast](https://github.com/getbraincloud/braincloud-roomserver-unreal)

A project containing both Client and Server for a dedicated server demo real-time multiplayer game. Requires source build of Unreal Engine.

## Another github repo: [Space Shooters](https://github.com/getbraincloud/bootcamp-unreal)

The video tutorial project showing step by step how to integrate most of brainCloud's features.
