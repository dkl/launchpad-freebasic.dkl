#!/bin/bash
set -ex

dput --config dput-dkl.cf ppa-freebasic.dkl freebasic-bootstrap-x86_1.01.0-0ppa2~utopic1_source.changes
dput --config dput-dkl.cf ppa-freebasic.dkl freebasic-bootstrap-x86-64_1.01.0-0ppa2~utopic1_source.changes
