#!/bin/bash
set -ex

cd $packagename

# freebasic source package made from upstream source tarball
origtarball=${packagename}_${FBC_VERSION}.orig.tar.xz
cp ../src/$upstreamtitle.tar.xz $origtarball

# Extract the FB sources
srcdir=$packagename-$FBC_VERSION
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

cd ..
