@ echo off

:: run this in your project root folder

::if not defined %BRAINCLOUD_TOOLS% goto Path_Error

set SERVER_ENVIRONMENT=internal
  
pushd ..

set WORKSPACE=%CD%

call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestApp\Source\RelayTestApp relaytestapp h %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat RelayTestAppCPP\Source\RelayTestAppCPP relaytestapp h %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat TappyChicken\Source\TappyChicken ue_tappychicken h %SERVER_ENVIRONMENT%
call %BRAINCLOUD_TOOLS%\bin\copy-ids.bat ScriptTestApp\Config ScriptTestApp ini %SERVER_ENVIRONMENT%

popd

exit /B 0

:Path_Error
echo "Must set BRAINCLOUD_TOOLS=~/braincloud-client-master"
exit /B 1