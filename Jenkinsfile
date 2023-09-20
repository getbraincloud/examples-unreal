pipeline {
    agent none
    parameters {
        string(name: 'BC_LIB', defaultValue: '', description: 'braincloud-unreal-plugin-src branch (blank for .gitmodules)')
        string(name: 'BRANCH_NAME', defaultValue: 'ue4-examples', description: 'examples-unreal branch')
        choice(name: 'PRODUCT', choices: ['all', 'RelayTestApp', 'RelayTestAppCpp', 'TappyChicken', 'ScriptTestApp'], description: 'Which thing to build?')
        choice(name: 'PLATFORM', choices: ['all', 'Win64'], description: 'Which platform to build?')
        booleanParam(name: 'DELETE_WORKSPACE', defaultValue: false, description: 'Start with fresh workspace?')        // todo: 'iOS', 'Android'
        // todo: pick engine version
        // todo: set server 'internal', 'prod', etc
    }
    stages {
        stage('Clean Mac') {
            when {
                expression {
                    params.DELETE_WORKSPACE == true
                }
            }
            agent {
                label 'clientUnit'
            }
            steps {
                echo "---- Deleting workspace folder Mac"
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
                 UE_VERSION="4.27"
                 UE_INSTALL_PATH="C:\\ProgramFiles\\UE_4.27\\"
                 BRAINCLOUD_TOOLS="C:\\Users\\buildmaster\\braincloud-client-master"
              }
             steps {
                 echo "---- building RelayTestApp for Win64 branch ${BRANCH_NAME} plugin ${BC_LIB}"
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\checkout-submodule.bat %BC_LIB%'
                 bat 'autoconfig_win64.bat -nodev'

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

       stage('Build All 4.27 Win') {
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
                 UE_VERSION="4.27"
                 UE_INSTALL_PATH="C:\\ProgramFiles\\UE_4.27\\"
                 BRAINCLOUD_TOOLS="C:\\Users\\buildmaster\\braincloud-client-master"
              }
             steps {
                 echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                 // deleteDir() // deleting makes for a slow build, do this manually if needed
                 checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])
                 bat 'autobuild\\checkout-submodule.bat %BC_LIB%'
                 bat 'autoconfig_win64.bat -nodev'
                 bat 'autobuild\\makebuild.bat RelayTestApp Win64 UE_4_Win64'
                 bat 'autobuild\\makebuild.bat RelayTestAppCPP Win64 UE_4_Win64'
                 bat 'autobuild\\makebuild.bat TappyChicken Win64 UE_4_Win64'
                 bat 'autobuild\\makebuild.bat ScriptTestApp Win64 UE_4_Win64'
            }
            post {
                success {
                    fileOperations([fileZipOperation(folderPath: 'UE_4_Win64', outputFolderPath: '.')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'UE_4_Win64.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
       }

    } // end stages
}