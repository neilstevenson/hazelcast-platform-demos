FROM library/openjdk:17-slim

# From pom.xml
ARG MC_CLUSTER1_NAME
ARG MC_CLUSTER1_ADDRESSLIST
ARG MC_CLUSTER1_PORTLIST
ARG MC_CLUSTER2_NAME
ARG MC_CLUSTER2_ADDRESSLIST
ARG MC_CLUSTER2_PORTLIST

# Maven compiled target
ARG JAR_FILE
COPY target/${JAR_FILE} application.jar

# Default values provided
ENV MY_KUBERNETES_ENABLED "true"

# Preconfigure cluster connections
ENV MC_CLUSTER1_NAME=$MC_CLUSTER1_NAME
ENV MC_CLUSTER1_ADDRESSLIST=$MC_CLUSTER1_ADDRESSLIST
ENV MC_CLUSTER1_PORTLIST=$MC_CLUSTER1_PORTLIST
ENV MC_CLUSTER2_NAME=$MC_CLUSTER2_NAME
ENV MC_CLUSTER2_ADDRESSLIST=$MC_CLUSTER2_ADDRESSLIST
ENV MC_CLUSTER2_PORTLIST=$MC_CLUSTER2_PORTLIST

ENV JAVA_ARGS ""
ENV JAVA_OPTS "--add-modules java.se --add-exports java.base/jdk.internal.ref=ALL-UNNAMED --add-opens java.base/java.lang=ALL-UNNAMED --add-opens java.base/java.nio=ALL-UNNAMED --add-opens java.base/sun.nio.ch=ALL-UNNAMED --add-opens java.management/sun.management=ALL-UNNAMED --add-opens jdk.management/com.sun.management.internal=ALL-UNNAMED"

ENTRYPOINT exec java \
   $JAVA_ARGS $JAVA_OPTS \
   -DHOST_IP=${HOST_IP} \
   -DCLUSTER1_NAME=$MC_CLUSTER1_NAME \
   -DCLUSTER1_ADDRESSLIST=$MC_CLUSTER1_ADDRESSLIST \
   -DCLUSTER1_PORTLIST=$MC_CLUSTER1_PORTLIST \
   -DCLUSTER2_NAME=$MC_CLUSTER2_NAME \
   -DCLUSTER2_ADDRESSLIST=$MC_CLUSTER2_ADDRESSLIST \
   -DCLUSTER2_PORTLIST=$MC_CLUSTER2_PORTLIST \
   -Dmy.kubernetes.enabled=$MY_KUBERNETES_ENABLED \
   -jar application.jar