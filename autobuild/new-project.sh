FOLDER=${1?Error: no input filename given}
cd $FOLDER
git submodule add -b 5.0 https://github.com/ufna/VaRest.git Plugins/VaRest
git submodule add -b develop git@github.com:getbraincloud/braincloud-unreal-plugin-src.git Plugins/BCClient
