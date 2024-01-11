@ echo OFF

for /d %%a in (BCChat, BCFPS, MobileTestApp, RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp, Groups, Leaderboard) do (
	setlocal enableDelayedExpansion
	cd %%a
	echo !CD!
	pushd ..

	CALL %~dp0\cleanupunreal.bat
	cd ..
)
exit /b %errorlevel%