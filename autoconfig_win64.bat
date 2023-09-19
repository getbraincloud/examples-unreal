@ echo off

:: run this in your project root folder

::if not defined %BRAINCLOUD_TOOLS% goto Path_Error

set SERVER_ENVIRONMENT=internal
  
pushd %~dp0

set WORKSPACE=%CD%
echo WORKSPACE is %WORKSPACE%

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestApp\Config RelayTestApp ini %SERVER_ENVIRONMENT%
git update-index --assume-unchanged RelayTestApp\Config\BrainCloudConfig.ini

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestAppCPP\Config RelayTestApp ini %SERVER_ENVIRONMENT%
git update-index --assume-unchanged RelayTestAppCPP\Config\BrainCloudConfig.ini

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat TappyChicken\Source\TappyChicken ue_tappychicken h %SERVER_ENVIRONMENT%
git update-index --assume-unchanged TappyChicken\Source\TappyChicken\ids.h

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat ScriptTestApp\Config ScriptTestApp ini %SERVER_ENVIRONMENT%
git update-index --assume-unchanged ScriptTestApp\Config\BrainCloudConfig.ini

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat Leaderboard\Config Leaderboard ini %SERVER_ENVIRONMENT%
git update-index --assume-unchanged Leaderboard\Config\BrainCloudConfig.ini

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat Groups\Config Groups ini %SERVER_ENVIRONMENT%
git update-index --assume-unchanged Groups\Config\BrainCloudConfig.ini

popd

exit /B 0

:Path_Error
echo Must set BRAINCLOUD_TOOLS=C:\path\to\braincloud-client-master
exit /B 1