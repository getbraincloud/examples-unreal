@ echo off
::&& setlocal EnableDelayedExpansion

FOR %%G IN (RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp) DO (

if exist "%%G\Plugins\BCClient" (

    call %BRAINCLOUD_TOOLS%\bin\checkout-submodule.bat %%G\Plugins\BCClient %1

) else (echo Folder not exists)
)