#!/bin/bash

for i in RelayTestAppCPP/Plugins/BCClient RelayTestApp/Plugins/BCClient TappyChicken/Plugins/BCClient ScriptTestApp/Plugins/BCClient Groups/Plugins/BCClient Leaderboard/Plugins/BCClient
do
if [[ -d $i ]];
then
		STR=$(git config -f .gitmodules --get submodule.$i.branch)
	    pushd $i
	    if [[ $(git diff --compact-summary .) ]];
    	then
			echo "Folder has mods"
		else
			git checkout ${1:-$STR}
			git pull
		fi
		popd				
else
	echo "Folder not exists"
fi 
done