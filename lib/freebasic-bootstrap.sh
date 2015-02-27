# Get a fresh fbc source tree for the wanted git commit, and build it.
# Then we can use this bin/fbc to precompile its own sources, which ensures
# that the precompiled sources are compatible with the rtlib from this version.
srcdir=fbc-$FBC_VERSION
if [ ! -d $srcdir ]; then
	cp -R fbc $srcdir
	cd $srcdir
	git reset --hard $FBC_GIT
	rm -rf .git
	cd ..
fi

# But we build in a separate dir to avoid polluting the source tree, because we
# still want to package that as the orig.tar.gz later.
builddir=$srcdir-build
mkdir -p $builddir
cd $builddir
make -f ../$srcdir/makefile
cd ..

# Create new source tree with target-specific precompiled fbc sources
# We have to do this everytime currently, because we want to create orig.tar.gz
# from it without the debian/ stuff, and then copy in the debian/ stuff for the
# debuild later.
debsrcdir=freebasic-bootstrap-$FBC_BOOTSTRAP_FBDEBARCH-$FBC_VERSION
rm -rf $debsrcdir
cp -R $srcdir $debsrcdir
cd $debsrcdir
../$builddir/bin/fbc -i inc src/compiler/*.bas -m fbc -e -r -v \
	-target linux-$FBC_BOOTSTRAP_FBARCH
cd ..

# Make "upstream" tarball from source tree
tarname=freebasic-bootstrap-${FBC_BOOTSTRAP_FBDEBARCH}_${FBC_VERSION}.orig.tar.gz
rm -f $tarname
tar -czf $tarname $debsrcdir

# Copy in debian/ stuff into source tree
FBC_BOOTSTRAP_SED=$(cat <<EOF
	-e s/%FBC_BOOTSTRAP_FBARCH%/${FBC_BOOTSTRAP_FBARCH}/g
	-e s/%FBC_BOOTSTRAP_FBDEBARCH%/${FBC_BOOTSTRAP_FBDEBARCH}/g
	-e s/%FBC_BOOTSTRAP_DEBARCH%/${FBC_BOOTSTRAP_DEBARCH}/g
EOF
)
cp -R debian/ $debsrcdir
cd $debsrcdir/debian
sed $FBC_BOOTSTRAP_SED < changelog.in > changelog
sed $FBC_BOOTSTRAP_SED < control.in > control
sed $FBC_BOOTSTRAP_SED < rules.in > rules
chmod +x rules
rm *.in
cd ../..

# Create source package
cd $debsrcdir
debuild -S
#debuild -S -us -uc
cd ..
