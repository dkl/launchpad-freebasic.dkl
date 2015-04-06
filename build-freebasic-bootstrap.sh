#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBC_VERSION-source-bootstrap
packagename=freebasic-bootstrap

source build.sh
