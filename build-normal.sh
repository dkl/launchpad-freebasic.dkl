#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source
selfbuilddepend=" freebasic,"
is_bootstrap=""
sourcename="freebasic"

source build.sh
