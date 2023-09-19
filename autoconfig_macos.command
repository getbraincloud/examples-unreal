#!/bin/bash

# run this in your project root folder

if [ -z "$BRAINCLOUD_TOOLS" ];
then
  export BRAINCLOUD_TOOLS=~/braincloud-client-master
fi

if [ -z "$UE_INSTALL_PATH" ];
then
    export UE_INSTALL_PATH='/Users/Shared/Epic Games/UE_5.1'
fi

echo "UE_INSTALL_PATH is $UE_INSTALL_PATH"

if ! [ -d "${BRAINCLOUD_TOOLS}" ];
then
    echo "Error: Can't find brainCloud tools in path ${BRAINCLOUD_TOOLS}"
    exit 1
fi

if [ -z $1 ];
then
  if [ -z $SERVER_ENVIRONMENT ];
  then
    SERVER_ENVIRONMENT=internal
  fi
else
  SERVER_ENVIRONMENT=$1
fi

cd "`dirname "$0"`"

export WORKSPACE=$PWD
echo "WORKSPACE is $WORKSPACE"

${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestApp/Config -p RelayTestApp -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestAppCPP/Config -p RelayTestApp -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o TappyChicken/Source/TappyChicken -p ue_tappychicken -x h -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o Leaderboard/Config -p LeaderBoard -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o ScriptTestApp/Config -p ScriptTestApp -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o Groups/Config -p Groups -x ini -s $SERVER_ENVIRONMENT 

git update-index --assume-unchanged RelayTestApp/Config/BrainCloudSettings.ini
git update-index --assume-unchanged RelayTestAppCPP/Config/BrainCloudSettings.ini
git update-index --assume-unchanged  TappyChicken/Source/TappyChicken/ids.h
git update-index --assume-unchanged Leaderboard/Config/BrainCloudSettings.ini
git update-index --assume-unchanged ScriptTestApp/Config/BrainCloudSettings.ini
git update-index --assume-unchanged Groups/Config/BrainCloudSettings.ini
echo "Secret config files have been excluded from git worktree."

echo "Copying certificates for RTT"

cd RelayTestApp
rsync -a "$UE_INSTALL_PATH/Engine/Content/Certificates/ThirdParty/cacert.pem" Content/Certificates/
cd ..

cd RelayTestAppCpp
rsync -a "$UE_INSTALL_PATH/Engine/Content/Certificates/ThirdParty/cacert.pem" Content/Certificates/
cd ..

echo "Done setup examples"