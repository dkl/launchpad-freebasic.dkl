FreeBASIC packages:

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

  fbc is written in FreeBASIC (self-hosting).

  A FreeBASIC Compiler installation on Linux typically looks like this:
    bin/fbc - the compiler program
    include/freebasic/ - .bi header files (like .h files for C/C++)
    lib/freebasic/ - runtime libraries which are statically linked into FB programs.


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
