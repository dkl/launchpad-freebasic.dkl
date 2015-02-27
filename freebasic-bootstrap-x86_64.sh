#!/bin/bash

FBC_BOOTSTRAP_FBARCH=x86_64
FBC_BOOTSTRAP_FBDEBARCH=x86-64
FBC_BOOTSTRAP_DEBARCH=amd64

source config.sh
source lib/update-fbc-git.sh
source lib/freebasic-bootstrap.sh
