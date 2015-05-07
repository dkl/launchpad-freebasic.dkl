#!/bin/bash
set -ex

source config.sh

for ubuntuseries in $allubuntuseries; do
	dput --config dput-dkl.cf ppa-freebasic.dkl \
		build/${ubuntuseries}/freebasic_${FBVERSION}-0ppa5~${ubuntuseries}1_source.changes
done
