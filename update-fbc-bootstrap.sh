#!/bin/bash
set -ex

source config.sh

#
# Regenerate the precompiled sources in src/fbc-bootstrap/linux-{x86,x86_64}
#
# To do this, we build the selected fbc version, and then use it to precompile
# itself. This ensures that the precompiled sources are compatible with the
# rtlib from this version.
#
# Then we move the precompiled sources into the respective
# src/fbc-bootstrap/linux-* directory and create the fbc-bootstrap tarball.
#

cd src
rm -rf fbc-bootstrap-*
fbcbootstrap=fbc-bootstrap-$FBC_VERSION
mkdir $fbcbootstrap
cd $fbcbootstrap
cp ../readme-fbc-bootstrap.txt readme.txt

# Build fbc
tar xf ../FreeBASIC-$FBC_VERSION-source.tar.xz
srcdir=FreeBASIC-$FBC_VERSION-source
cd $srcdir
make compiler
cd ..

# Precompile fbc's sources
mkdir linux-x86
mkdir linux-x86_64

tempfbc="$srcdir/bin/fbc -i $srcdir/inc"
fbcsrcdir=$srcdir/src/compiler

$tempfbc $fbcsrcdir/*.bas -m fbc -e -target linux-x86 -r -v
mv $fbcsrcdir/*.asm linux-x86

$tempfbc $fbcsrcdir/*.bas -m fbc -e -target linux-x86_64 -r -v
mv $fbcsrcdir/*.c linux-x86_64

rm -rf $srcdir
cd ..

# Tarball
tar cJf $fbcbootstrap.tar.xz $fbcbootstrap
