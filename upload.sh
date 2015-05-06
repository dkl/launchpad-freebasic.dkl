#!/bin/bash
set -ex

source config.sh
dput --config dput-dkl.cf ppa-freebasic.dkl freebasic_${FBC_VERSION}-0ppa1~utopic1_source.changes
