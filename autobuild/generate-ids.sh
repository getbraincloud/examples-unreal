PROJECT_NAME=${1?Error}
APP_ID=${2}
SECRET_KEY=${3}
LOG=false

cd Source/$PROJECT_NAME

echo "#pragma once" >ids.h


echo "#define BRAINCLOUD_SERVER_URL \"https://api.internal.braincloudservers.com/dispatcherv2\"" >>ids.h
echo "#define BRAINCLOUD_APP_ID \"$APP_ID\"" >>ids.h
echo "#define BRAINCLOUD_APP_SECRET \"$SECRET_KEY\"" >>ids.h

echo "File ids.h created in Source/$PROJECT_NAME"

if [ $LOG == true ];
then
cat ids.h
fi 

git update-index  --assume-unchanged ids.h
echo "-- File ids.h excluded from git worktree"
