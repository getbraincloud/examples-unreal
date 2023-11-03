pipeline {
    agent none
    parameters {
        string(name: 'BC_LIB', defaultValue: '', description: 'braincloud-unreal-plugin branch (blank for .gitmodules)')
        string(name: 'BRANCH_NAME', defaultValue: 'develop', description: 'examples-unreal branch')
        choice(name: 'PRODUCT', choices: ['all', 'RelayTestApp', 'RelayTestAppCpp', 'TappyChicken', 'ScriptTestApp', 'Groups', 'Leaderboard'], description: 'Which thing to build?')
        choice(name: 'PLATFORM', choices: ['all', 'MAC', 'Win64'], description: 'Which platform to build?')
        booleanParam(name: 'DELETE_WORKSPACE', defaultValue: false, description: 'Start with fresh workspace?')
        // todo: 'iOS', 'Android'
        // todo: pick engine version
        // todo: set server 'internal', 'prod', etc
    }
    stages {
        stage('Clean MAC') {
            when {
                expression {
                    params.DELETE_WORKSPACE == true
                }
            }
            agent {
                label 'clientUnit'
            }
            steps {
                echo "---- Deleting workspace folder MAC"
                deleteDir()
            }
        }

        stage('Clean Win') {
            when {
                expression {
                    params.DELETE_WORKSPACE == true
                }
            }
            agent {
                label 'unrealWindows'
            }
            steps {
                echo "---- Deleting workspace folder Win"
                deleteDir()
            }
        }

       stage('Project Build MAC') {
            when {
                expression {
                    params.PRODUCT != 'all' &&
                    params.PLATFORM == 'MAC' ||
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
                echo "---- building ${params.PRODUCT} for MAC branch ${BRANCH_NAME} plugin ${BC_LIB}"
                // deleteDir()  // deleting makes for a slow build, do this manually if needed
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh "${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o ${params.PRODUCT}/Config -p ${params.PRODUCT} -x ini -s ${params.SERVER_ENVIRONMENT}"
                sh "autobuild/makebuild.sh ${params.PRODUCT} MAC ."
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: "${params.PRODUCT}_MAC", outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: "${params.PRODUCT}_MAC.zip", followSymlinks: false, onlyIfSuccessful: true
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
                 echo "---- building RelayTestApp for Win64 branch ${BRANCH_NAME} plugin ${BC_LIB}"
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\checkout-submodule.bat %BC_LIB%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat RelayTestApp\\Config RelayTestApp ini %SERVER_ENVIRONMENT%'

                // todo: use product and platform parameters
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 .'

            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'RelayTestApp_Win64', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'RelayTestApp_Win64.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

        stage('Build All 5.1 MAC') {
            when {
                expression {
                    params.PRODUCT == 'all' &&
                    params.PLATFORM == 'MAC' ||
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
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestApp/Config -p RelayTestApp -x ini -s $SERVER_ENVIRONMENT'
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o RelayTestAppCPP/Config -p RelayTestApp -x ini -s $SERVER_ENVIRONMENT'
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o TappyChicken/Config -p TappyChicken -x ini -s $SERVER_ENVIRONMENT'
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o Leaderboard/Config -p LeaderBoard -x ini -s $SERVER_ENVIRONMENT'
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o ScriptTestApp/Config -p ScriptTestApp -x ini -s $SERVER_ENVIRONMENT'
                sh '${BRAINCLOUD_TOOLS}/bin/copy-ids.sh -o Groups/Config -p Groups -x ini -s $SERVER_ENVIRONMENT '
                sh 'autobuild/makebuild.sh RelayTestApp MAC UE_5_MAC'

                // todo: signing issues
                //sh 'autobuild/makebuild.sh RelayTestApp IOS UE_5_IOS'
                // todo: make sure compatible version android sdk etc
                //sh 'autobuild/makebuild.sh RelayTestApp ANDROID UE_5_Android'

                sh 'autobuild/makebuild.sh RelayTestAppCpp MAC UE_5_MAC'
                sh 'autobuild/makebuild.sh TappyChicken MAC UE_5_MAC'
                sh 'autobuild/makebuild.sh ScriptTestApp MAC UE_5_MAC'
                sh 'autobuild/makebuild.sh Groups MAC UE_5_MAC'
                sh 'autobuild/makebuild.sh Leaderboard MAC UE_5_MAC'
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_5_MAC', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_5_MAC.zip', followSymlinks: false, onlyIfSuccessful: true
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
                 bat 'autobuild\\checkout-submodule.bat %BC_LIB%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat RelayTestApp\\Config RelayTestApp ini %SERVER_ENVIRONMENT%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat RelayTestAppCPP\\Config RelayTestApp ini %SERVER_ENVIRONMENT%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat TappyChicken\\Config TappyChicken h %SERVER_ENVIRONMENT%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat ScriptTestApp\\Config ScriptTestApp ini %SERVER_ENVIRONMENT%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat Leaderboard\\Config Leaderboard ini %SERVER_ENVIRONMENT%'
                 bat 'call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat Groups\\Config Groups ini %SERVER_ENVIRONMENT%'
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

    } // end stages
}