freebasic source package:

  a) upstream FreeBASIC-x.xx.x-source-bootstrap tarball, which contains
     precompiled compiler sources for multiple targets.
     no build-depends on itself...
     (for bootstrapping)

  b) upstream FreeBASIC-x.xx.x-source tarball, plain FB sources.
     build-depends: freebasic
     (once the compiler was bootstrapped)

binary packages:

   freebasic
   libfreebasic-dev

  The main reason to have libfreebasic-dev separated from the package containing
  fbc is because that's how libraries typically are packaged. libfreebasic-dev
  isn't intended to be used without fbc, but it could be. Also, this hints at
  the possibility at a shared libfreebasic.so in the future.

What to do here:

  ./debian-freebasic-bootstrap.sh
    Builds the freebasic-bootstrap Debian source package.

  1. For packaging a new FB version, update the version number in config.sh
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

  fbc uses binutils (as, ld) to assembly and link native binaries, much like
  gcc.

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
   * I think valac is bootstrapped from precompiled .c included in the source
     package
   * How did you bootstrap fpc, or gcc?

  A FreeBASIC Compiler installation on Linux typically looks like this:
    bin/fbc - the compiler program
    include/freebasic/ - .bi header files (like .h files for C/C++)
    lib/freebasic/ - runtime libraries, statically linked into FB programs


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

* add Vcs-Browser, Vcs-Git

* Split up binary packages further (especially the bindings)
   freebasic - meta package
   freebasic-compiler - fbc
   freebasic-base - core FB headers (fbgfx.bi etc.), arch=any
   freebasic-crt - CRT bindings
   freebasic-png - libpng bindings, depends libpng-dev
   freebasic-gtk  - FB's GTK binding, which supports both gtk2 and gtk3
   freebasic-gtk2 - depends freebasic-gtk + libgtk2.0-dev
   freebasic-gtk3 - depends freebasic-gtk + libgtk-3-dev
   freebasic-zlib ...

   FB libs for other targets based on gcc-multilib and mingw-w64
   libfreebasic-dev - meta package
   libfreebasic-linux-x86-dev
   libfreebasic-linux-x86-64-dev
   libfreebasic-win32-dev
   libfreebasic-win64-dev
   ... (e.g. ARM)
   (and/or rely on multiarch for the linux-* libs; freebasic-multilib?)

   freebasic-dbg, freebasic-doc?

* Unknown copyright/license on some files; debian/copyright needs further
  improvement
* FB runtime libs are only available as .a libs, not as .so yet.
  GNU/Linux distros often prefer shared libs though.
  Should there be a shared libfreebasic?
