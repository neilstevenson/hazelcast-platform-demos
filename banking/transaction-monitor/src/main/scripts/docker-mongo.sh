#!/bin/bash

DOCKER_PORT_INTERNAL=27017
DOCKER_PORT_EXTERNAL=${DOCKER_PORT_INTERNAL}

. `dirname $0`/env-docker.sh
