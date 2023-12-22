#!/bin/bash

# run this in your project root folder

if [ -z "$BRAINCLOUD_TOOLS" ];
then
  export BRAINCLOUD_TOOLS=~/braincloud-client-master
fi

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

${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestApp/Source/RelayTestApp -p relaytestapp -x h -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestAppCPP/Source/RelayTestAppCPP -p relaytestapp -x h -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o TappyChicken/Source/TappyChicken -p ue_tappychicken -x h -s $SERVER_ENVIRONMENT
${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o ScriptTestApp/Config -p ue_scripttestapp -x ini -s $SERVER_ENVIRONMENT
