PROJECT_NAME=${1?Error}
APP_ID=${2}
SECRET_KEY=${3}
S2S_KEY=${4}

# to see log of changes use:
LOG=false

cd Config

sed -i '' "s/SecretKey = .*$/SecretKey = \"${SECRET_KEY}\"/g" DefaultEngine.ini
sed -i '' "s/AppID = .*$/AppID = \"${APP_ID}\"/g" DefaultEngine.ini

if [ -z $S2S_KEY ];
then
LINES=5
else
sed -i '' "s/S2SKey = .*$/S2SKey = \"${S2S_KEY}\"/g" DefaultEngine.ini
LINES=7
fi

cd ..

echo "$PROJECT_NAME config modified Config/DefaultEngine.ini"

if [ $LOG == true ];
then
	head -${LINES} Config/DefaultEngine.ini
fi
git update-index  --assume-unchanged Config/DefaultEngine.ini
echo "-- Please do not commit these changes to git"
