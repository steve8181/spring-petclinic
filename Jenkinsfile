node {
   def mvnHome
   stage('Preparation') { // for display purposes
      // Get some code from a GitHub repository
      git 'https://github.com/steve8181/spring-petclinic.git'
      // Get the Maven tool.
      // ** NOTE: This 'Maven3.6.3' Maven tool must be configured
      // **       in the global configuration.           
      mvnHome = tool 'MavenInitial'
   }
   stage('Build') {
		bat 'mvn clean package'
      }
   stage('Results') {

      junit '**/target/surefire-reports/TEST-*.xml'
      archiveArtifacts 'target/*.jar'
	
   }
}
  
   
  
  
