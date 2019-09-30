pipeline  {
    agent {
        docker {
            image 'ubuntu-cmake-boost'
            args '-u 0'
            // image 'ubuntu'
            // args '-u 0 -v $HOME/.m2:/root/.m2'
        }
    }  
    stages{
        // stage('Install cmake') {
        //     steps{
        //          sh 'apt update'
        //          sh 'apt install cmake libboost-all-dev -y'
        //     }
        // }
        stage('clone'){
            steps{
                git 'https://github.com/msuliborski/bank-simulation'
            }
        }
        stage('Build & Test') {
            steps{
                sh 'echo sript change'
                sh 'cd bank-simulation'
                sh 'cmake CMakeLists.txt'
                sh 'make'
                sh 'out/./bank-simulation'
            } 
        }
    } 
}
