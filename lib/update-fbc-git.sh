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
