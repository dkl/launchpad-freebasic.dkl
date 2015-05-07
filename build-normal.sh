#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source
selfbuilddepend=" freebasic,"
rulesfile="rules-normal"

source build.sh
