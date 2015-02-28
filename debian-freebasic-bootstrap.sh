#!/bin/bash
set -ex

source config.sh

rm -rf debian-freebasic-bootstrap
mkdir debian-freebasic-bootstrap
cd debian-freebasic-bootstrap

#
# The freebasic-bootstrap Debian source package is made from two "upstream
# tarballs.
#
# Source packages with multiple upstream tarballs are possible, but there is
# a special naming convention, which treats additional tarballs as "components"
# of the main tarball:
#    <source>_<version>.orig-<component>.tar
# (https://wiki.debian.org/Projects/DebSrc3.0)
#
# Thus we have:
#
#    FreeBASIC-$FBC_VERSION-source.tar.xz
# => freebasic-bootstrap_$FBC_VERSION.orig.tar.xz
#
#    fbc-bootstrap-$FBC_BOOTSTRAP_VERSION.tar.xz
# => freebasic-bootstrap_$FBC_VERSION.orig-fbc-bootstrap-$FBC_BOOTSTRAP_VERSION.tar.xz
#
# The two have to be extracted as
#    freebasic-bootstrap-$FBC_VERSION/
#    freebasic-bootstrap-$FBC_VERSION/fbc-bootstrap-$FBC_BOOTSTRAP_VERSION/
#

origtarball=freebasic-bootstrap_$FBC_VERSION.orig.tar.xz
componenttarball=freebasic-bootstrap_$FBC_VERSION.orig-fbc-bootstrap-$FBC_BOOTSTRAP_VERSION.tar.xz

cp ../src/FreeBASIC-$FBC_VERSION-source.tar.xz $origtarball
cp ../src/fbc-bootstrap-$FBC_BOOTSTRAP_VERSION.tar.xz $componenttarball

# Extract everything and create package source tree
# The main FB source tarball has a toplevel named FreeBASIC-$FBC_VERSION-source,
# we rename that to something matching our orig tarball name.
srcdir=freebasic-bootstrap-$FBC_VERSION
tar xf $origtarball
mv FreeBASIC-$FBC_VERSION-source $srcdir
cd $srcdir
tar xf ../$componenttarball
cd ..

# Insert debian/ stuff
cp -R ../debian/ $srcdir

# Create source package
cd $srcdir
debuild -S
#debuild -S -us -uc
cd ..

cd ..
