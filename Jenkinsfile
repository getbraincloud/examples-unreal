pipeline {
    agent none
    parameters {
        string(name: 'BC_LIB', defaultValue: '', description: 'braincloud-unreal-plugin-src branch (blank for .gitmodules)')
        string(name: 'BRANCH_NAME', defaultValue: 'develop', description: 'examples-unreal branch')
        choice(name: 'PRODUCT', choices: ['all', 'RelayTestApp', 'RelayTestAppCpp', 'TappyChicken', 'ScriptTestApp', 'Groups', 'Leaderboard'], description: 'Which thing to build?')
        choice(name: 'PLATFORM', choices: ['all', 'Mac', 'Win64', 'iOS', 'Android'], description: 'Which platform to build?')
        // todo: pick engine version
    }
    stages {

        stage('Build All 5.1 Mac') {
            when {
                expression {
                    params.PRODUCT == 'all' &&
                    params.PLATFORM == 'Mac' ||
                    params.PRODUCT == 'all' &&
                    params.PLATFORM == 'all'
                }
            }
            agent {
                label 'clientUnit'
            }
            environment {
                PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
                UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                //UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1.1_Source" // needs varest plugin
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                BRAINCLOUD_TOOLS="/Users/buildmaster/braincloud-client-master"
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                // deleteDir() // deleting makes for a slow build, do this manually if needed
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh 'autobuild/_brainCloudSetup_examples-unreal.command'
                sh 'autobuild/makebuild.sh RelayTestApp MAC UE_5_Mac'

                // todo: signing issues
                //sh 'autobuild/makebuild.sh RelayTestApp IOS UE_5_IOS'
                // todo: make sure compatible version android sdk etc
                //sh 'autobuild/makebuild.sh RelayTestApp ANDROID UE_5_Android'

                sh 'autobuild/makebuild.sh RelayTestAppCpp MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh TappyChicken MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh ScriptTestApp MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh Groups MAC UE_5_Mac'
                sh 'autobuild/makebuild.sh Leaderboard MAC UE_5_Mac'
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_5_Mac', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_5_Mac.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
        }

       stage('Build All 5.2 Win') {
            when {
                expression {
                    params.PRODUCT == 'all' &&
                    params.PLATFORM == 'Win64' ||
                    params.PRODUCT == 'all' &&
                    params.PLATFORM == 'all'
                }
            }
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
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 // todo: checkout submodule branch
                 bat 'autobuild\\_brainCloudSetup_examples-unreal.bat'
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 UE_5_Win64'
                 bat 'autobuild\\makebuild.bat RelayTestAppCPP Win64 UE_5_Win64'
                 bat 'autobuild\\makebuild.bat TappyChicken Win64 UE_5_Win64'
                 bat 'autobuild\\makebuild.bat ScriptTestApp Win64 UE_5_Win64'
                 bat 'autobuild\\makebuild.bat Groups Win64 UE_5_Win64'
                 bat 'autobuild\\makebuild.bat Leaderboard Win64 UE_5_Win64'
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_5_Win64', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_5_Win64.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

       stage('Project Build Mac') {
            when {
                expression {
                    params.PRODUCT != 'all' &&
                    params.PLATFORM == 'Mac' ||
                    params.PRODUCT != 'all' &&
                    params.PLATFORM == 'all'
                }
            }
            agent {
                label 'clientUnit'
            }
            environment {
                PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
                UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                //UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1.1_Source" // todo: needs varest plugin
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                BRAINCLOUD_TOOLS="/Users/buildmaster/braincloud-client-master"
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                // deleteDir()  // deleting makes for a slow build, do this manually if needed
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh 'autobuild/_brainCloudSetup_examples-unreal.command'
                sh "autobuild/makebuild.sh ${params.PRODUCT} ${params.PLATFORM} ${params.PRODUCT}_${params.PLATFORM}"
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: "${params.PRODUCT}_${params.PLATFORM}", outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: "${params.PRODUCT}_${params.PLATFORM}.zip", followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

       stage('Project Build Win') {
            when {
                expression {
                    params.PRODUCT != 'all' &&
                    params.PLATFORM == 'Win64' ||
                    params.PRODUCT != 'all' &&
                    params.PLATFORM == 'all'
                }
            }
            agent {
                 label 'unrealWindows'
             }
             environment {
                 // todo: check other installed engine versions
                 UE_VERSION="5.2"
                 UE_INSTALL_PATH="C:\\ProgramFiles\\UE_5.2\\"
                 BRAINCLOUD_TOOLS="C:\\Users\\buildmaster\\braincloud-client-master"
              }
             steps {
                 echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 // todo: checkout submodule branch
                 bat 'autobuild\\_brainCloudSetup_examples-unreal.bat'

                // todo: use product and platform parameters
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 RelayTestApp_Win64'

            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'RelayTestApp_Win64', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'RelayTestApp_Win64.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

    } // end stages
}