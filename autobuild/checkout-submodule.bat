@echo OFF

FOR %%G IN (MobileTestApp, RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp) DO (

if exist "%%G\Plugins\BCClient" (

    set SUBMODULE=%%G\Plugins\BCClient
    set BRANCH=%1

    if [%BRANCH%]==[] (
        set BRANCH=develop
    )


    pushd %SUBMODULE%

    echo Checking out %BRANCH% to %SUBMODULE%
    git fetch
    git checkout %BRANCH%
    git pull

    popd

) else (echo Folder not exists)
)
