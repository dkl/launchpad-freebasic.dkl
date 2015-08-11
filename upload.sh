#!/bin/bash
set -ex

source config.sh
ppaversion=0ppa1

for ubuntuseries in $allubuntuseries; do
	dput --config dput-dkl.cf ppa-freebasic.dkl \
		build/${ubuntuseries}/freebasic_${FBVERSION}-${ppaversion}~${ubuntuseries}1_source.changes
done
