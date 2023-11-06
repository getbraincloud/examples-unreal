@ echo off
:: usage:
::      autobuild\makebuild.bat RelayTestApp Win64

::eg. Jenkins (no quotes, no spaces)
:: 		> set UE_INSTALL_PATH=C:\ProgramFiles\UE_5.0

if not defined UE_INSTALL_PATH goto Path_Error

set PROJECTNAME=%~1
if "%PROJECTNAME%" == "" goto Proj_Error


call "%UE_INSTALL_PATH%\Engine\Binaries\DotNet\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress 

call "%UE_INSTALL_PATH%\Engine\Build\BatchFiles\Build.bat" %PROJECTNAME% Win64 Development -Project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -WaitMutex -FromMsBuild

call "%UE_INSTALL_PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -rocket -nocompile -compileeditor -installed -nop4 -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -cook -stage -archive -archivedirectory="%WORKSPACE%\%PROJECTNAME%_Win64" -package -clientconfig=Development -clean -pak -prereqs -distribution -nodebuginfo -targetplatform=Win64 -build -utf8output


:: zip this: ${PROJECTNAME}_Win64
:: archive that: ${PROJECTNAME}_Win64.zip


:: return code for tests
exit /B %errorlevel%

:Proj_Error
echo "Pass project name."
exit /B 1

:Path_Error
echo Set UE_INSTALL_PATH
exit /B 1