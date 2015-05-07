#!/bin/bash
set -ex

for ubuntuseries in $allubuntuseries; do
	mkdir -p build/$ubuntuseries
	cd build/$ubuntuseries

	cp -R ../../debian .
	sed \
		-e "s/@sourcename@/${sourcename}/g" \
		-e "s/@ubuntuseries@/${ubuntuseries}/g" \
		< debian/changelog.in > debian/changelog
	sed \
		-e "s/@sourcename@/${sourcename}/g" \
		-e "s/@selfbuilddepend@/${selfbuilddepend}/g" \
		< debian/control.in > debian/control
	sed -e "s/@is_bootstrap@/${is_bootstrap}/g" < debian/rules.in > debian/rules
	rm debian/*.in
	chmod +x debian/rules

	# freebasic source package made from upstream source tarball
	origtarball=${sourcename}_${FBVERSION}.orig.tar.xz
	cp ../../src/$upstreamtitle.tar.xz $origtarball

	# Extract the FB sources
	srcdir=$sourcename-$FBVERSION
	rm -rf $srcdir
	tar xf $origtarball
	mv $upstreamtitle $srcdir

	# Insert debian/ stuff
	cp -R debian/ $srcdir

	# Create source package
	cd $srcdir
	debuild -S
	#debuild -d -us -uc
	cd ..

	cd ../..
done
