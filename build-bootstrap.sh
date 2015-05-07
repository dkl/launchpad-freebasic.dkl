#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source-bootstrap
selfbuilddepend=""
rulesfile="rules-bootstrap"

source build.sh
