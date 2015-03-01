#!/bin/bash
set -ex

source config.sh

cd freebasic

# The freebasic package is made from the upstream FreeBASIC source tarball.
upstreamtitle=FreeBASIC-$FBC_VERSION-source
origtarball=freebasic_$FBC_VERSION.orig.tar.xz
cp ../src/$upstreamtitle.tar.xz $origtarball

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

cd ..
