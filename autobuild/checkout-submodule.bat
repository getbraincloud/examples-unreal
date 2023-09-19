@ echo off
::&& setlocal EnableDelayedExpansion

FOR %%G IN (RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp, Groups, Leaderboard) DO (

if exist "%%G\Plugins\BCClient" (
    for /f %%i in ('git config -f .gitmodules --get submodule.Plugins/BCClient.branch') do set BRANCH=%%i
    pushd %%G\Plugins\BCClient

	for /f %%i in ('git diff --compact-summary .') do set FOO=%%i
    if [%FOO%]==[] (
		    if [%1]==[] ( git checkout %BRANCH% ) else ( git checkout %1 )
			git pull
	) else (
		echo Folder has mods
		git status
	)
	popd
) else (echo Folder not exists)
)