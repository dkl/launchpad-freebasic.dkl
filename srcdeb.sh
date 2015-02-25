#!/bin/sh
set -ex

# Get fbc sources if not yet done
if [ ! -d fbc ]; then
	git clone https://github.com/freebasic/fbc.git
fi

# Update fbc sources
cd fbc
git fetch
git fetch --tags
git remote prune origin
git reset --hard origin/master
cd ..

FBC_VERSION=1.01.0
FBC_GIT=f67df69261dc87921ef0a375675c359654415418
srcdir=freebasic-bootstrap-1.01.0
tarname=freebasic-bootstrap_1.01.0.orig.tar.gz

# Get a fresh fbc source tree for the wanted git commit
rm -rf $srcdir
cp -R fbc $srcdir

cd $srcdir
git reset --hard $FBC_GIT
rm -rf .git
cd ..

# Use the host fbc to build this FB version, then we can use this bin/fbc to
# precompile its own sources.
# This way we ensure that the precompiled sources are compatible with the rtlib
# from this version, and we don't have to depend on the host fbc's version.
# But we build in a separate dir to avoid polluting the main source tree.
tempbuilddir=${srcdir}-tempbuild
cp -R $srcdir $tempbuilddir

cd $tempbuilddir
make
cd ..

cd $srcdir
../$tempbuilddir/bin/fbc -i ../$tempbuilddir/inc src/compiler/*.bas -m fbc -e -r -v
cd ..

rm -rf $tempbuilddir

# Make "upstream" tarball
rm -f $tarname
tar -czf $tarname $srcdir

# Copy in debian/ stuff
cp -R debian/ $srcdir

# Create source .deb
cd $srcdir
debuild
cd ..

rm -rf $srcdir
