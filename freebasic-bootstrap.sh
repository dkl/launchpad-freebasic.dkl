#!/bin/bash
set -ex

source config.sh

cd freebasic-bootstrap

#
# The freebasic-bootstrap Debian source package is made from two "upstream
# tarballs.
#
# Source packages with multiple upstream tarballs are possible, but there is
# a special naming convention, which treats additional tarballs as "components"
# of the main tarball:
#    <source>_<version>.orig-<component>.tar.*
# (https://wiki.debian.org/Projects/DebSrc3.0)
#

origtarball=freebasic-bootstrap_$FBC_VERSION.orig.tar.xz
cp ../src/FreeBASIC-$FBC_VERSION-source.tar.xz $origtarball

componenttarball=freebasic-bootstrap_$FBC_VERSION.orig-fbc-bootstrap.tar.xz
cp ../src/fbc-bootstrap-$FBC_VERSION.tar.xz $componenttarball

#
# Extract the two tarballs to form one source tree:
# 1. extract to FreeBASIC-$FBC_VERSION-source/
#     rename to freebasic-bootstrap-$FBC_VERSION/
#
# 2. extract to freebasic-bootstrap-$FBC_VERSION/fbc-bootstrap-$FBC_VERSION/
#     rename to freebasic-bootstrap-$FBC_VERSION/fbc-bootstrap/
#
srcdir=freebasic-bootstrap-$FBC_VERSION
rm -rf $srcdir
tar xf $origtarball
mv FreeBASIC-$FBC_VERSION-source $srcdir
cd $srcdir
tar xf ../$componenttarball
mv fbc-bootstrap-$FBC_VERSION fbc-bootstrap
cd ..

# Insert debian/ stuff
cp -R debian/ $srcdir

# Create source package
cd $srcdir
debuild -S
#debuild -S -us -uc
cd ..

cd ..
