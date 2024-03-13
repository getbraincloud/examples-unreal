# brainCloud Target Practice

![Leaderboard-GamePlay.png](Screenshots%2F%2FLeaderboard-GamePlay.png)

This example demonstrates the use of brainCloud's
- integrating Cloud Code scripts
- using Leaderboards feature

Implements [CloudCode Tutorial #2 Making API Calls and #4 Pre and Post Hooks](https://getbraincloud.com/apidocs/cloud-code-central/cloud-code-tutorials/).

## Playable builds

| [Windows](https://drive.google.com/file/d/103fW1Q2kpJOA-XILjBuuLnWHeOboAtnI/view?usp=drive_link) | [MacOS](https://drive.google.com/file/d/17-nYjMbIdS-6WBKbix0qGIqgucNjUihV/view?usp=sharing) | [Android](https://drive.google.com/file/d/172PCAb9W5-UHod8E7eKbbCPMmDyjEWW9/view?usp=sharing) | [IOS](https://drive.google.com/file/d/174W_S0rwFAGpH3Zz_e0zx8S7Pvbgz14I/view?usp=sharing) |

## How to play
Login to brainCloud with any username and a password. A new account will be created or existing account will be used.
Use your mouse to aim and click to fire. On mobile device, use one finger touch to aim and tap two fingers to fire. Hit ten targets then receive an accuracy score. Beat the high score to make it to the top of the Leaderboard!

## Code project setup

### Setup app on brainCloud portal:

Start by making a new app on the brainCloud portal. Once this is done move on to these next steps:

- Create a new leaderboard in Leaderboard Configs, you can name it 'accuracy', set Entry Type: Player, Leaderboard Type: High Value and Rotation Type: Never
- In Cloud Code, import the script files located in this projects folder `GetLeaderboard.ccjs` and `PostToLeaderboard.ccjs`

### Initialize and build in Unreal Engine:

- Open the project in Unreal Engine, enter the app ID and secret into the brainCloud settings widget, and set the server URL to `https://api.braincloudservers.com`
- Click update and restart Unreal Engine.

