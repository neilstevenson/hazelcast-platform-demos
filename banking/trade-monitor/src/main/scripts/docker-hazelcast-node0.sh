#!/bin/bash

PROJECT=trade-monitor
MODULE=hazelcast-node
CLONE=0

BASEDIR=`dirname $0`
cd $BASEDIR/../../../$MODULE

# Darwin vs Linux
OS=`uname -s`
if [ "$OS" = "Darwin" ]; then
    HOST_IP=`ifconfig | grep -w inet | grep -v 127.0.0.1 | cut -d" " -f2`
fi

if [ "$OS" = "Linux" ]; then
    HOST_IP=`ifconfig | grep -w inet -m 1 | awk '{print $2}'`
fi

if [ "$HOST_IP" == "" ]
then
 HOST_IP=127.0.0.1
fi
if [ `echo $HOST_IP | wc -w` -ne 1 ]
then
 echo \$HOST_IP unclear:
 ifconfig | grep -w inet | grep -v 127.0.0.1
 exit 1
fi

MY_BOOTSTRAP_SERVERS=kafka-broker0:9092,kafka-broker1:9093,kafka-broker2:9094
MY_POSTGRES_ADDRESS=postgres:5432
MY_PULSAR_LIST=pulsar:6650

DOCKER_IMAGE=hazelcast-platform-demos/${PROJECT}-${MODULE}

# Private network so can use container names
docker network create $PROJECT --driver bridge > /dev/null 2>&1
# For easier restarts
docker container prune --force > /dev/null 2>&1

PORT=$(($CLONE + 5701))

CMD="docker run -e MY_BOOTSTRAP_SERVERS=$MY_BOOTSTRAP_SERVERS \
 -e MY_KUBERNETES_ENABLED=false \
 -e MY_POSTGRES_ADDRESS=$MY_POSTGRES_ADDRESS \
 -e MY_PULSAR_LIST=$MY_PULSAR_LIST \
 -e JAVA_ARGS=-Dhazelcast.local.publicAddress=${HOST_IP}:${PORT} \
 -p ${PORT}:${PORT} --name=${MODULE}${CLONE} --rm --network=${PROJECT} ${DOCKER_IMAGE}"
echo $CMD

$CMD
RC=$?
echo RC=${RC}
exit ${RC}

