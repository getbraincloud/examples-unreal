pipeline {
    agent none
    parameters {
        string(name: 'BC_LIB', defaultValue: '', description: 'braincloud-unreal-plugin branch (blank for .gitmodules)')
        string(name: 'BRANCH_NAME', defaultValue: 'develop', description: 'examples-unreal branch')
        choice(name: 'PRODUCT', choices: ['RelayTestApp', 'RelayTestAppCpp', 'TappyChicken', 'ScriptTestApp', 'Groups', 'Leaderboard'], description: 'Which thing to build?')
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
                    params.PLATFORM == 'MAC' ||
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
                    params.PLATFORM == 'Win64' ||
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
                 echo "---- building ${params.PRODUCT} for Win64 branch ${BRANCH_NAME} plugin ${BC_LIB}"
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\checkout-submodule.bat %BC_LIB%'
                 bat "call %BRAINCLOUD_TOOLS%\\bin\\copy-ids.bat ${params.PRODUCT}\\Config ${params.PRODUCT} ini ${params.SERVER_ENVIRONMENT}"

                // todo: use product and platform parameters
                 bat "autobuild\\makebuild.bat ${params.PRODUCT} Win64 ."

            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: "${params.PRODUCT}_Win64", outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: "${params.PRODUCT}_Win64.zip", followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

    } // end stages
}