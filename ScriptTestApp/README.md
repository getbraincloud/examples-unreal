# Script Test App

![ScriptTestApp-GamePlay.png](Screenshots%2F%2FScriptTestApp-GamePlay.png)

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
