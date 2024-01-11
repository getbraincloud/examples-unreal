@ echo OFF

for /d %%a in (MobileTestApp, RelayTestApp, RelayTestAppCPP, TappyChicken, ScriptTestApp) do (
	setlocal enableDelayedExpansion
	cd %%a
	echo !CD!
	pushd ..

	CALL %~dp0\cleanupunreal.bat
	cd ..
)
exit /b %errorlevel%