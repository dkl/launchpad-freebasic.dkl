#!/bin/bash
set -ex

# freebasic source package made from upstream source tarball
origtarball=freebasic_${FBC_VERSION}.orig.tar.xz
cp src/$upstreamtitle.tar.xz $origtarball

# Extract the FB sources
srcdir=freebasic-$FBC_VERSION
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
