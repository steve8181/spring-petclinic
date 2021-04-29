From openjdk:11.0.10 jre-slim-stretch
Expose 8080
AG JAR=spring-petclinic-2.4.2.jar
COPY target/$JAR /app.jar
ENTRYPOINT ["java","-jar","/app.jar"]
