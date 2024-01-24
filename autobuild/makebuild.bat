@ echo off
:: usage:
::      autobuild\makebuild.bat RelayTestApp Win64

::eg. Jenkins (no quotes, no spaces)
:: 		> set UE_INSTALL_PATH=C:\ProgramFiles\UE_5.0

if not defined UE_INSTALL_PATH goto Path_Error

set TARGET=%~2
if "%TARGET%" == "" set TARGET=Win64

set PROJECTNAME=%~1
if "%PROJECTNAME%" == "" goto Proj_Error

set ARTIFACTS=%~3
if "%ARTIFACTS%" == "" set ARTIFACTS=%WORKSPACE%\artifacts

echo --- BRAINCLOUD Commencing Build %PROJECTNAME% for %TARGET% ---
echo --- BRAINCLOUD Archiving to %ARTIFACTS% ---

::set CultureString=-CookCultures=en
set CultureString=

::set ModeString=-distribution

::set CookString=-cookflavor=ECS2

::call "%UE_INSTALL_PATH%\Engine\Binaries\DotNet\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress

::call "%UE_INSTALL_PATH%\Engine\Build\BatchFiles\Build.bat" %PROJECTNAME% Win64 Development -Project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -WaitMutex -FromMsBuild

call "%UE_INSTALL_PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -noP4 -nocompile -utf8output -compileeditor -platform=%TARGET% %ModeString% -clientconfig=Development -build -cook %CultureString% %CookString% -unversionedcookedcontent -pak -compressed -iostore -nodebuginfo -stage -iterate -prereqs -installed -nocompileuat -package -archive -archivedirectory="%ARTIFACTS%\%PROJECTNAME%_Unreal_%TARGET%Build"

:: return code for build
exit /B %errorlevel%

:Proj_Error
echo "Pass project name."
exit /B 1

:Path_Error
echo Set UE_INSTALL_PATH
exit /B 1