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

        stage('Code Pull Mac') {
            agent {
                label 'clientUnit'
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                //if (${CLEAN_BUILD}) {
                    deleteDir()
                //}
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])				
                sh 'autobuild/checkout-submodule.sh ${BC_LIB}'
                sh '~/braincloud-bin/setupexamplesunreal.sh'
            }
        }
      
        stage('Build macOS') {
            agent {
                label 'clientUnit'
            }
            environment {
			    PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
			    UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                PROJECT="RelayTestAppCpp"
                PLATFORM="MAC"
            }
            steps {
				sh 'autobuild/makebuild.sh RelayTestAppCpp MAC'
            }
            post {
                success {
                    fileOperations([folderCreateOperation('artifacts/${PROJECT-${PLATFORM}')])
                    fileOperations([fileCreateOperation(fileContent: '''Run \'${PROJECT}\' on Mac OS.\nFirst, quarantine to allow permission:\nsudo xattr -r -d com.apple.quarantine ${PROJECT}.app/\n''', fileName: 'artifacts/${PROJECT}-${PLATFORM}/README.md')])
                    fileOperations([fileZipOperation(folderPath: 'artifacts/${PROJECT}-${PLATFORM}', outputFolderPath: 'artifacts')])
                     archiveArtifacts allowEmptyArchive: true, artifacts: 'artifacts/${PROJECT}-${PLATFORM}.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
        }
        
        stage('Build iOS') {
            agent {
                label 'clientUnit'
            }
            environment {
			    PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
			    UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                PROJECT="RelayTestAppCpp"
                PLATFORM="IOS"
  			}
            steps {
				sh 'autobuild/makebuild.sh ${PROJECT} ${PLATFORM}'
            }
            post {
                success {
                    fileOperations([folderCreateOperation('artifacts/${PROJECT}-${PLATFORM}')])
                    fileOperations([fileCreateOperation(fileContent: '''Install \'${PROJECT}\' on ${PLATFORM}.\n''', fileName: 'artifacts/${PROJECT}-${PLATFORM}/README.md')])
                    fileOperations([fileZipOperation(folderPath: 'artifacts/${PROJECT}-${PLATFORM}', outputFolderPath: 'artifacts')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'artifacts/${PROJECT}-${PLATFORM}.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
        }           
       
        stage('Build Android') {
            agent {
                label 'clientUnit'
            }
            environment {
			    PATH = "/Applications/CMake.app/Contents/bin:/usr/local/bin:${env.PATH}"
			    UE_INSTALL_PATH="/Users/Shared/Epic Games/UE_5.1"
                UE_EDITOR_CMD="UnrealEditor-Cmd"
                UE_VERSION="5.1"
                PROJECT="RelayTestAppCpp"
                PLATFORM="ANDROID"
  			}
            steps {
				sh 'autobuild/makebuild.sh ${PROJECT} ${PLATFORM}'
            }
            post {
                success {
                    fileOperations([folderCreateOperation('artifacts/${PROJECT}-${PLATFORM}')])
                    fileOperations([fileCreateOperation(fileContent: '''Install \'${PROJECT}\' on ${PLATFORM}.\n''', fileName: 'artifacts/${PROJECT}-${PLATFORM}/README.md')])
                    fileOperations([fileZipOperation(folderPath: 'artifacts/${PROJECT}-${PLATFORM}', outputFolderPath: 'artifacts')])
                    archiveArtifacts allowEmptyArchive: true, artifacts: 'artifacts/${PROJECT}-${PLATFORM}.zip', followSymlinks: false, onlyIfSuccessful: true
                }
            }
        }
    } // end stages Mac
        
   stages {
        stage('Code Pull Win') {
            agent {
                label 'unrealWindows'
            }
            steps {
                echo "---- braincloud Code Pull ${BRANCH_NAME} ${BC_LIB}"
                //if (${CLEAN_BUILD}) {
                    deleteDir()
                //}
                checkout([$class: 'GitSCM', branches: [[name: '*/${BRANCH_NAME}']], extensions: [[$class: 'SubmoduleOption', disableSubmodules: false, parentCredentials: false, recursiveSubmodules: true, reference: '', trackingSubmodules: false]], userRemoteConfigs: [[url: 'https://github.com/getbraincloud/examples-unreal.git']]])				
            	bat 'C:\\Users\\buildmaster\\braincloud-bin\\setuptestsunreal.bat'
            }
        }
        
        stage('RelayTestAppCpp Build Windows 4.27 ') {
           agent {
                label 'unrealWindows'
            }
            environment {
                PROJECT="RelayTestAppCpp"
                PLATFORM="WIN64"
                UE_VERSION="4.27"
			    UE_RUNUAT_PATH="D:\\Program Files\\UE_4.27\\Engine\\Build\\BatchFiles\\RunUAT.bat"
                UE_EDITOR_PATH="D:\\Program Files\\UE_4.27\\Engine\\Binaries\\Win64\\UE4Editor-cmd.exe"
  			}
            steps {
                //bat 'autobuild\\makebuild.bat %PROJECT%'
                echo "gtting ready for this"
            }

        }
        

    } // end stages windows
}