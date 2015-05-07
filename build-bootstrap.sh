#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source-bootstrap
selfbuilddepend=""
is_bootstrap="1"
sourcename="freebasic-bootstrap"

source build.sh
