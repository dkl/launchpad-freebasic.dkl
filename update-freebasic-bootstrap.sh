#!/bin/bash
set -ex

source config.sh

source lib/update-fbc-git.sh
source lib/get-specific-fbc-version.sh

# Build the selected fbc version. Then we can use this bin/fbc to precompile its
# own sources, which ensures that the precompiled sources are compatible with
# the rtlib from this version.
# But we build in a separate dir to avoid polluting the source tree, because we
# still want to package that in a tarball later (with the precompiled sources,
# but not the .o files etc. from this temp build).
builddir=$srcdir-build
if [ ! -d $builddir ]; then
	mkdir -p $builddir
	cd $builddir
	make -f ../$srcdir/makefile
	cd ..
fi
tempfbc="$builddir/bin/fbc -i $srcdir/inc"
fbcsrcdir=$srcdir/src/compiler

rm -rf src/freebasic-bootstrap-*

FBC_BOOTSTRAP_TITLE=freebasic-bootstrap-$FBC_BOOTSTRAP_VERSION
bootstrap=src/$FBC_BOOTSTRAP_TITLE
mkdir $bootstrap

cp src/readme-freebasic-bootstrap.txt $bootstrap

# Precompile fbc sources
outdir=$bootstrap/fbc-$FBC_VERSION-linux-x86
mkdir $outdir
$tempfbc $fbcsrcdir/*.bas -m fbc -e -target linux-x86 -r -v
mv $fbcsrcdir/*.asm $outdir

outdir=$bootstrap/fbc-$FBC_VERSION-linux-x86_64
mkdir $outdir
$tempfbc $fbcsrcdir/*.bas -m fbc -e -target linux-x86_64 -r -v
mv $fbcsrcdir/*.c $outdir

# Tarball
cd src
tar -cJf $FBC_BOOTSTRAP_TITLE.tar.xz $FBC_BOOTSTRAP_TITLE
cd ..
