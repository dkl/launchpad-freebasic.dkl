FreeBASIC source & binary packages:

  freebasic-bootstrap-x86 - FB sources with precompiled compiler sources for x86
   => freebasic-bootstrap

  freebasic-bootstrap-x86-64 - Same for x86_64
   => freebasic-bootstrap

  freebasic - build-depends: freebasic | freebasic-bootstrap
   => freebasic - meta package, depends: freebasic-compiler, freebasic-base, libfreebasic-dev
   => freebasic-compiler - provides fbc
   => freebasic-base - provides core FB headers (fbgfx.bi etc.), arch=any
   => freebasic-crt - CRT bindings
   => freebasic-gtk - GTK2/3 bindings
   => freebasic-png - libpng bindings
   => freebasic-zlib - zlib bindings
   => ...
   => libfreebasic-dev - meta package, depends on target-specific libs
   => libfreebasic-linux-x86-dev - provides target-specific libfb stuff, cross-compiling packages based on gcc-multilib/mingw-w64
   => libfreebasic-linux-x86-64-dev
   => libfreebasic-win32-dev
   => libfreebasic-win64-dev
   => ... (e.g. ARM)

  freebasic-bootstrap is used for bootstrapping fbc. The point is that in this case,
  the source package is target-specific (freebasic-bootstrap-x86 etc.), due to the
  precompiled fbc sources it contains. I think it would be ugly to do this with the
  main "freebasic" source package. With that being separate from the bootstrapping stuff,
  it can act like a "normal" package - one source, built for multiple targets.

  freebasic-compiler, freebasic-base, freebasic-<binding> is pretty similar to the
  packages for FreePascal: fpc, fp-unit-*, etc. Splitting up the bindings into separate
  packages is especially useful, because not everybody needs all of them, and then for
  example freebasic-zlib can depend on libz-dev.

  The main reason to have libfreebasic-dev separated from the package containing fbc
  is because that's how libraries typically are packaged. libfreebasic-dev isn't intended
  to be used without fbc, but it could be. Also, this hints at the possibility at a
  libfreebasic in the future.


What to do here:

  ./freebasic-bootstrap-x86.sh
    Creates the bootstrap package for x86. This involves compiling FB, so the host
    must be set up accordingly.
    This is best done on x86 (i.e. using a x86 fbc). Doing it on x86_64 (with a x86_64
    fbc) should work too, but there's a bigger chance of running into bugs due to the
    cross-compiling.

  ./freebasic-bootstrap-x86_64.sh
    Same for x86_64

  ./update-freebasic-bootstrap.sh
    Creates the "upstream" tarballs for the freebasic-bootstrap-* packages:
    fbc sources + precompiled .asm/.c. Version number = fbversion-N, where N
    allows making updates without changing the base fbversion. These can't be
    rebuilt everytime the Debian packages are made, because different timestamps
    etc. would cause the tarball to change.


  1. For packaging a new FB version, update the version number in config.sh
    1.1. Generate new freebasic-bootstrap tarball:
      ./update-freebasic-bootstrap.sh
  2. Update debian/* files as needed, especially the debian/changelog
  3. Build source packages
  4. check lintian etc., maybe repeat
  5. upload last built packages


Some information on the FreeBASIC Compiler:

  FreeBASIC is a programming language influenced mostly by QBASIC, C, C++,
  VisualBasic.

  The FreeBASIC Compiler (fbc) compiles .bas source files to native code, like
  gcc does with .c files.

  fbc has multiple code-generation backends:
   * an x86-assembly backend which generates .asm files directly. (x86 only)
   * a C backend which generates non-portable C code and uses gcc to compile it
     to .asm. (works for x86, x86_64, ARM, ...)
   * (a work-in-progress LLVM IR backend)

  fbc uses binutils (as, ld) to assembly and link native binaries, much like gcc.

  fbc defaults to compiling for the native target, but it can cross-compile for
  other targets. The runtime libraries are target-specific.

  fbc is written in FreeBASIC (self-hosting), which means it depends on itself
  to be compiled from source. This means bootstrapping can only be done by
  importing existing binaries or by precompiling the compiler's .bas sources to
  .asm or .c and include that in the source package, such that the rest of the
  build can be done without fbc.
  Similar cases (as far as I know - not 100% sure on this):
   * I think Mageia bootstrapped fbc by packaging the precompiled binaries from
     the fbc project.
   * I think valac is bootstrapped from precompiled .c included in the source package
   * How did you bootstrap fpc, or gcc?

  A FreeBASIC Compiler installation on Linux typically looks like this:
    bin/fbc - the compiler program
    include/freebasic/ - .bi header files (like .h files for C/C++)
    lib/freebasic/ - runtime libraries which are statically linked into FB programs.


Version numbers for Ubuntu Launchpad PPA:

  ${fbversion}-0ppa1~utopic1

  based on https://help.launchpad.net/Packaging/PPA/BuildingASourcePackage

  "-0" because that way any official packages (which should be "-1" or higher)
  will supersede the PPA one. freebasic isn't officially packaged yet, and
  thus my packages aren't modifications of existing packages.

  "ppa1", so packages from PPA can supersede packages from main repos.
  Doesn't apply yet, but doesn't hurt. It's probably good anyways to mark the
  packages as being from the PPA this way.

  "~utopic1", because the binary packages are distro specific (glibc ABI,
  maybe different dependency package names, etc.), and by uploading multiple
  source packages versioned this way, we get builds for multiple distros in
  parallel.


To do:

* Unknown copyright/license on some files; debian/copyright needs further
  improvement
* FB runtime libs are only available as .a libs, not as .so yet.
  GNU/Linux distros often prefer shared libs though.
  Should there be a shared libfreebasic?
* Potential library name conflict: libfb also is a framebuffer library,
  may need to be renamed to libfreebasic
* add Vcs-Browser, Vcs-Git
* make RPMs
* upload to Launchpad + OBS
* freebasic-dbg, freebasic-doc?
* For freebasic-gtk we may need to do something like freebasic-gtk{2|3} which each depend
  on freebasic-gtk and the corresponding libgtk*-dev package, because FB's GTK headers
  support both GTK2 and GTK3, but the two libgtk*-dev packages can't be installed in parallel.
* Make freebasic-bootstrap packages as minimal as possible? (remove docs, non-core headers,
  gfxlib, etc.)
