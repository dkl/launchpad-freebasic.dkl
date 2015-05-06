#!/bin/bash
set -ex

source config.sh
upstreamtitle=FreeBASIC-$FBC_VERSION-source

cp debian/rules-normal debian/rules

source build.sh

rm debian/rules
