FOLDER=${1?Error: no input filename given}
cd $FOLDER
git rm -rf Plugins/BCClient
git rm -rf Plugins/VaRest
git submodule add -b 4.27 https://github.com/ufna/VaRest.git Plugins/VaRest
git submodule add -b develop git@github.com:getbraincloud/braincloud-unreal-plugin-src.git Plugins/BCClient
