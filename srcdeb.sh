#!/bin/sh
set -ex

if [ -z "$FBC" ]; then
	FBC=fbc
fi

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
if [ ! -d $srcdir ]; then
	cp -R fbc $srcdir
	cd $srcdir
	git reset --hard $FBC_GIT
	rm -rf .git
	cd ..

	# Precompile compiler sources to linux-x86 .asm
	cd $srcdir
	$FBC src/compiler/*.bas -m fbc -e -target linux-x86 -r -v
	cd ..
fi

# Make "upstream" tarball
rm -f $tarname
tar -czf $tarname $srcdir

# Copy in debian/ stuff
cp -R debian/ $srcdir

# Create source .deb
cd $srcdir
debuild
cd ..
