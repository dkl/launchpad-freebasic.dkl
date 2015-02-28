# Get a fresh fbc source tree for the wanted git commit
# (the main fbc tree is probably at a different commit)
srcdir=fbc-$FBC_VERSION
if [ ! -d $srcdir ]; then
	cp -R fbc $srcdir
	cd $srcdir
	git reset --hard $FBC_GIT
	rm -rf .git
	cd ..
fi
