#!/bin/bash
# usage:
#      autobuild/makebuild.sh project_name

export PROJECTNAME=${1}
export WORKSPACE=$PWD

"/Users/Shared/Epic Games/UE_5.1/Engine/Build/BatchFiles/Mac/GenerateProjectFiles.sh" -projectfiles -project="$WORKSPACE/$PROJECTNAME/$PROJECTNAME.uproject" -game -rocket -progress 
