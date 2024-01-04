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

cd "`dirname "$0"`"/..

export WORKSPACE=$PWD
echo "WORKSPACE is $WORKSPACE"

for j in BCChat RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
do
  ${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o $j/Config -p $j -x ini -s $SERVER_ENVIRONMENT
done

${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o BCFPS/Config -p DedicatedDemo -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestAppCPP/Config -p RelayTestApp -x ini -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o MobileTestApp/Config -p clientapp -x ini -s $SERVER_ENVIRONMENT

if [[ $2 != -nodev ]];
then
  for j in BCFPS MobileTestApp BCChat RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard
  do
    git update-index --assume-unchanged $j/Config/BrainCloudSettings.ini
  done
  echo "Secret config files have been excluded from git worktree."
fi

echo "Copying certificates for RTT"
for j in BCFPS MobileTestApp BCChat RelayTestAppCPP RelayTestApp
do

  cd $j
  rsync -a "$UE_INSTALL_PATH/Engine/Content/Certificates/ThirdParty/cacert.pem" Content/Certificates/
  cd ..

done

echo "Done setup examples"