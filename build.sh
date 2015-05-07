#!/bin/bash
set -ex

sed -e "s/@selfbuilddepend@/${selfbuilddepend}/g" < debian/control.in > debian/control
cp debian/$rulesfile debian/rules

# freebasic source package made from upstream source tarball
origtarball=freebasic_${FBVERSION}.orig.tar.xz
cp src/$upstreamtitle.tar.xz $origtarball

# Extract the FB sources
srcdir=freebasic-$FBVERSION
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

rm debian/rules debian/control
