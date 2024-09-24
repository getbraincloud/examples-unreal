@ echo OFF

for /d %%a in (BCChat, BCFPS, MobileTestApp, RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp, Leaderboard) do (
	setlocal enableDelayedExpansion
	cd %%a
	echo !CD!

	CALL %~dp0\cleanupunreal.bat
	cd ..
)
exit /b %errorlevel%