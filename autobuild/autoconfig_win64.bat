@ echo off

:: run this in your project root folder

::if not defined %BRAINCLOUD_TOOLS% goto Path_Error

set SERVER_ENVIRONMENT=internal
  
pushd %~dp0\..

set WORKSPACE=%CD%
echo WORKSPACE is %WORKSPACE%

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat BCFPS\Config DedicatedDemo ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestApp\Config RelayTestApp ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestAppCPP\Config RelayTestApp ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat TappyChicken\Config TappyChicken ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat ScriptTestApp\Config ScriptTestApp ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat Leaderboard\Config Leaderboard ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat Groups\Config Groups ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat BCChat\Config BCChat ini %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat MobileTestApp\Config clientapp ini %SERVER_ENVIRONMENT%

if "%1" NEQ "-nodev" (
    git update-index --assume-unchanged BCFPS/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged RelayTestApp/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged RelayTestAppCPP/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged TappyChicken/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged ScriptTestApp/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged Leaderboard/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged Groups/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged MobileTestApp/Config/BrainCloudSettings.ini
    git update-index --assume-unchanged BCChat/Config/BrainCloudSettings.ini
    echo Secret config files have been excluded from git worktree.
)

popd

exit /B 0

:Path_Error
echo Must set BRAINCLOUD_TOOLS=C:\path\to\braincloud-client-master
exit /B 1