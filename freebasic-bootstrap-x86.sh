#!/bin/bash
set -ex

FBC_VERSION=1.01.0
FBC_GIT=f67df69261dc87921ef0a375675c359654415418
FBC_BOOTSTRAP_FBARCH=x86
FBC_BOOTSTRAP_FBDEBARCH=x86
FBC_BOOTSTRAP_DEBARCH=i386

source lib/update-fbc-git.sh
source lib/freebasic-bootstrap.sh
