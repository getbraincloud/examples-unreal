@echo OFF
:: usage:
::      autobuild\workspace-generate.bat project_name

set PROJECTNAME=%1
echo %PROJECTNAME%
if [%UE_VERSION%]==[4.27] (
    call "%UE_INSTALL_PATH%\Engine\Binaries\DotNet\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress
) else (
    call "%UE_INSTALL_PATH%\Engine\Binaries\DotNet\UnrealBuildTool\UnrealBuildTool.exe" -projectfiles -project="%WORKSPACE%\%PROJECTNAME%\%PROJECTNAME%.uproject" -game -rocket -progress
)