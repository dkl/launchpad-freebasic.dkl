#!/bin/bash
set -ex

source config.sh
dput --config dput-dkl.cf ppa-freebasic.dkl freebasic_${FBVERSION}-0ppa3~utopic1_source.changes
