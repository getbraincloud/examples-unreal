@ echo OFF

set PROJECT_NAME=%1
set APP_ID=%2
set SECRET_KEY=%3


REM run from project root folder

cd Source\%PROJECT_NAME%


echo #pragma once >ids.h


echo #define BRAINCLOUD_SERVER_URL "https://api.internal.braincloudservers.com/dispatcherv2" >>ids.h
echo #define BRAINCLOUD_APP_ID "%APP_ID%" >>ids.h
echo #define BRAINCLOUD_APP_SECRET "%SECRET_KEY%" >>ids.h

echo File ids.h created in Source/%PROJECT_NAME%

type ids.h

cd ..\..