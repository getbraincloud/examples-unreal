#!/bin/bash

for i in RelayTestAppCPP/Plugins/BCClient RelayTestApp/Plugins/BCClient TappyChicken/Plugins/BCClient
do
if [[ -d $i ]];
then
    ${BRAINCLOUD_TOOLS}/bin/checkout-submodule.sh $i $1
else
	echo "Folder not exists"
fi 
done
