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
