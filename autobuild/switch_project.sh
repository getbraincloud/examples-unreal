#!/bin/bash

cd Plugins\VaRest
if [[$UE_BRANCH  == "4.27"]]; 
then
	git checkout 4.27
else 
	if [[$UE_BRANCH  == "5.0"]]; 
	then
		git checkout 5.0
else
	git checkout develop
	fi
fi
cd ..

#\Engine\Binaries\Win64\UnrealVersionSelector.exe" /switchversionsilent "%WORKSPACE%\%PROJECTNAME%.uproject" %UE_INSTALL_DIR%
