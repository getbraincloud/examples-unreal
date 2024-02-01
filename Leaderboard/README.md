# Leaderboard example

This example demonstrates the use of brainClouds leaderboards feature.

## Instructions

### Setup app on brainCloud portal:

Start by making a new app on the brainCloud portal. Once this is done move on to these next steps:

- Create a new leaderboard in Leaderboard Configs, you can name it 'accuracy', set Entry Type: Player, Leaderboard Type: High Value and Rotation Type: Never
- In Cloud Code, import the script files located in this projects folder `GetLeaderboard.ccjs` and `PostToLeaderboard.ccjs`
- Open the project in Unreal Engine, enter the app ID and secret into the brainCloud settings widget, and set the server URL to `https://api.internal.braincloudservers.com` - Click update and restart Unreal Engine.

