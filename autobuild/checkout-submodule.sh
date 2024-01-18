#!/bin/bash

PROJECT_LIST=$2

if [ -z ${PROJECT_LIST} ];
then
  PROJECT_LIST="BCChat BCFPS MobileTestApp RelayTestAppCPP RelayTestApp TappyChicken ScriptTestApp Groups Leaderboard"
fi

for i in $PROJECT_LIST
do
  if [[ -d $i/Plugins/BCClient ]];
  then

  SUBMODULE=$i/Plugins/BCClient
  BRANCH=$1

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
  fi
  else
    echo "Folder not exists"
  fi
done
