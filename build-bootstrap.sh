#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source-bootstrap

cp debian/rules-bootstrap debian/rules

source build.sh

rm debian/rules
