@echo OFF
set LIST=%2
if ["%LIST%"]==[""] (
    set LIST=BCChat, BCFPS, MobileTestApp, RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp, Groups, Leaderboard
)
set BRANCH=%1
        if ["%BRANCH%"]==[""] (
            set BRANCH=develop
        )

::setlocal enabledelayedexpansion

FOR %%G IN (%LIST%) DO (

    if exist "%%G\Plugins\BCClient" (

        pushd %%G\Plugins\BCClient

        echo Checking out %BRANCH% to %%G\Plugins\BCClient
        git checkout %BRANCH%
        git pull

        popd

    ) else (echo Folder not exists)    
)