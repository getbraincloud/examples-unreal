#!/bin/bash

if [ -z $BRAINCLOUD_TOOLS ];
then
  export BRAINCLOUD_TOOLS=~/braincloud-client-master
fi

if [ -z $UE_INSTALL_PATH ];
then
    export UE_INSTALL_PATH='/Users/Shared/Epic Games/UE_5.1'
fi

echo "UE_INSTALL_PATH is $UE_INSTALL_PATH"

if ! [ -d ${BRAINCLOUD_TOOLS} ];
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

${BRAINCLOUD_TOOLS}/bin/setupexamplesunreal.sh $SERVER_ENVIRONMENT

echo "Copying certificates for RTT"

cd RelayTestApp
rsync -a "$UE_INSTALL_PATH/Engine/Content/Certificates/ThirdParty/cacert.pem" Content/Certificates/
cd ..

cd RelayTestAppCpp
rsync -a "$UE_INSTALL_PATH/Engine/Content/Certificates/ThirdParty/cacert.pem" Content/Certificates/
cd ..

echo "Done"