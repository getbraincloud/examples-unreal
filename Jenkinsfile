pipeline {
    agent none
    triggers {
        cron('H 22 * * 1-5') // nightly around 10 pm
    }
    parameters {
        string(name: 'BC_LIB', defaultValue: '', description: 'braincloud-unreal-plugin-src branch (blank for .gitmodules)')
        string(name: 'BRANCH_NAME', defaultValue: 'develop', description: 'examples-unreal branch')
        booleanParam(name: 'CLEAN_BUILD', defaultValue: true, description: 'clean pull and build')
    }
    stages {

        stage('UE 5.1 Mac') {
            agent {
                label 'clientUnit'
            }
            environment {
                PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
                UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                BRAINCLOUD_TOOLS=/Users/buildmaster/braincloud-client-master
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                //if (${CLEAN_BUILD}) {
                    deleteDir()
                //}
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])				
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh 'autobuild/_brainCloudSetup_examples-unreal.command'
                sh 'autobuild/makebuild.sh RelayTestApp MAC'
                //sh 'autobuild/makebuild.sh RelayTestApp IOS'
                //sh 'autobuild/makebuild.sh RelayTestApp ANDROID'
            }
        }
    } // end stages
}