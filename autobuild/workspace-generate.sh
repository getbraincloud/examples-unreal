#!/bin/bash
# usage:
#      autobuild/workspace-genarate.sh project_name

#       export WORKSPACE=$PWD
#       export UE_INSTALL_PATH='/Users/Shared/Epic Games/UE_5.1'

PROJECTNAME=${1}
echo $PROJECTNAME
"${UE_INSTALL_PATH}/Engine/Build/BatchFiles/Mac/GenerateProjectFiles.sh" -projectfiles -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -game -rocket -progress 
