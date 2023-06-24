@ echo off
:: usage:
::      autobuild\makebuild.bat RelayTestApp Win64

::eg. Jenkins
:: 		> set UE_RUNUAT_PATH="D:\Program Files\UE_5.0\Engine\Build\BatchFiles\RunUAT.bat"
:: 		> set UE_EDITOR_PATH="D:\Program Files\UE_5.0\Engine\Binaries\Win64\UE4Editor-cmd.exe"

::eg. Local
::		> set UE_RUNUAT_PATH="C:\Program Files\Epic Games\UE_5.1\Engine\Build\BatchFiles\RunUAT.bat"
:: 		> set UE_EDITOR_PATH="C:\Program Files\Epic Games\UE_5.1\Engine\Binaries\Win64\UnrealEditor-cmd.exe"

if not defined UE_RUNUAT_PATH goto Path_Error
if not defined UE_EDITOR_PATH goto Path_Error

"D:\Program Files\UE_5.0\Engine\Binaries\DotNet\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress 

"D:\Program Files\UE_5.0\Engine\Build\BatchFiles\Build.bat" %PROJECTNAME% Win64 Development -Project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -WaitMutex -FromMsBuild

call %UE_RUNUAT_PATH% BuildCookRun -rocket -nocompile -compileeditor -installed -nop4 -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -cook -stage -archive -archivedirectory="%WORKSPACE%\%PROJECTNAME%_Unreal_WindowsBuild" -package -clientconfig=Development -ue4exe=UE4Editor-Cmd.exe -clean -pak -prereqs -distribution -nodebuginfo -targetplatform=Win64 -build -utf8output 

:: zip this: ${PROJECTNAME}_Unreal_WindowsBuild
:: archive that: ${PROJECTNAME}_Unreal_WindowsBuild.zip


:: return code for tests
exit /B %errorlevel%

:Path_Error
echo "Set UE_RUNUAT_PATH and UE_EDITOR_PATH."

exit /B 1