#!/bin/bash
for i in MobileTestApp RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp
do
  if [[ -d $i/Plugins/BCClient ]];
  then

  SUBMODULE=$1/Plugins/BCClient
  BRANCH=$2

  if [[ -d ${SUBMODULE}  ]];
  then

    if [ -z ${BRANCH} ];
    then
      BRANCH=$(git config -f .gitmodules --get submodule.${SUBMODULE}.branch)
    fi
    if [ -z ${BRANCH} ];
    then
        BRANCH=$(git remote show origin | sed -n '/HEAD branch/s/.*: //p')
    fi

    pushd ${SUBMODULE}

    if [[ $(git diff --compact-summary .) ]];
     then
     echo "Folder has mods"
    else
     echo "Checking out ${BRANCH} to ${SUBMODULE}"
     git fetch
     git checkout ${BRANCH}
     git pull
    fi
    popd
  else
    echo "Folder not exists"
  fi
done