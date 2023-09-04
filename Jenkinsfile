pipeline {
    agent none
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
                BRAINCLOUD_TOOLS="/Users/buildmaster/braincloud-client-master"
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                if (${params.CLEAN_BUILD}) {
                    deleteDir()
                }
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])				
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh 'autobuild/_brainCloudSetup_examples-unreal.command'
                sh 'autobuild/makebuild.sh RelayTestApp MAC UE_5_Mac'
                //sh 'autobuild/makebuild.sh RelayTestApp IOS'
                //sh 'autobuild/makebuild.sh RelayTestApp ANDROID'
/*                 sh 'autobuild/makebuild.sh RelayTestAppCpp MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh TappyChicken MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh ScriptTestApp MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh Groups MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh Leaderboard MAC UE_5_Mac' */
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_5_Mac', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_5_Mac.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
        }

       stage('UE 5.2 Win') {
             agent {
                 label 'unrealWindows'
             }
             environment {
                 UE_VERSION="5.2"
                 UE_INSTALL_PATH="C:\\ProgramFiles\\UE_5.2\\"
                 BRAINCLOUD_TOOLS="C:\\Users\\buildmaster\\braincloud-client-master"
              }
             steps {
                 echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                 //if (${CLEAN_BUILD}) {
                    deleteDir()
                 //}
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\_brainCloudSetup_examples-unreal.bat'
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 UE_5_Win'
                 //bat 'autobuild\\makebuild.bat RelayTestAppCPP Win64 UE_4_Win'
                 //bat 'autobuild\\makebuild.bat TappyChicken Win64 UE_4_Win'
                 //b/at 'autobuild\\makebuild.bat ScriptTestApp Win64 UE_4_Win'
                 //bat 'autobuild\\makebuild.bat Groups Win64 UE_4_Win'
                 //bat 'autobuild\\makebuild.bat Leaderboard Win64 UE_4_Win'
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_5_Win', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_5_Win.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

       stage('UE 4.27 Win') {
             agent {
                 label 'unrealWindows'
             }
             environment {
                 UE_VERSION="4.27"
                 UE_INSTALL_PATH="C:\\ProgramFiles\\UE_4.27\\"
                 BRAINCLOUD_TOOLS="C:\\Users\\buildmaster\\braincloud-client-master"
              }
             steps {
                 echo "---- braincloud Code Pull ue4-examples ${BC_LIB}"
                 //if (${CLEAN_BUILD}) {
                     deleteDir()
                 //}
                 checkout([$class: 'GitSCM', branches: [[name: '*/ue4-examples']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\_brainCloudSetup_examples-unreal-4.bat'
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 UE_4_Win'
                // bat 'autobuild\\makebuild.bat RelayTestAppCPP Win64 UE_4_Win'
                 //bat 'autobuild\\makebuild.bat TappyChicken Win64 UE_4_Win'
                 //bat 'autobuild\\makebuild.bat ScriptTestApp Win64 UE_4_Win'
             }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_4_Win', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_4_Win.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

    } // end stages
}