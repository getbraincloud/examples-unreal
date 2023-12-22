@ echo OFF

for /d %%a in ("BCChat","RelayTestAPP") do (
	setlocal enableDelayedExpansion
	cd %%a
	echo !CD!
	CALL ..\autobuild\cleanupunreal.bat
	cd ..
)
exit /b %errorlevel%