#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBVERSION-source

cp debian/rules-normal debian/rules

source build.sh

rm debian/rules
