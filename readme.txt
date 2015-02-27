Source packages:

  freebasic-bootstrap
    FB sources with precompiled compiler sources (x86-specific)
    Binary packages:
      freebasic-bootstrap

  freebasic
    Build-depends: freebasic | freebasic-bootstrap
    Binary packages:
      freebasic


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


Problems:

  * How to split FreeBASIC up into packages, what packages to provide?

    Everything in one "freebasic" package? Separate libfreebasic-dev?
    rtlib/gfxlib2 separated? "freebasic" as meta-package that pulls in
    "freebasic-compiler" and others? Bindings in separate arch=any packages such
    as freebasic-crt/gtk/png etc.?

    In any case, installing the "freebasic" package should always provide at
    least a working fbc + rtlib/gfxlib2 + core headers (fbgfx.bi, file.bi,
    dir.bi & co).

    Maybe it doesn't make sense to have a libfreebasic-dev package separate
    from freebasic, because they're only really useful together.
    But technically the rtlib/gfxlib2 could be used without fbc (a corner case
    example of that is bootstrapping fbc itself - then freebasic-bootstrap could
    build-depend on libfreebasic-dev).

  * Unknown copyright/license on some files

  * FB runtime libs are only available as .a libs, not as .so yet.
    GNU/Linux distros often prefer shared libs though.

  * Potential library name conflict: libfb also is a framebuffer library,
    may need to be renamed to libfreebasic

To do:

* add Vcs-Browser, Vcs-Git
* make RPMs
* upload to Launchpad + OBS
* old ideas for Debian packaging: http://www.freebasic.net/forum/viewtopic.php?p=99209
* freebasic-dbg, freebasic-doc?
* cross-compiling packages based on gcc-multilib/mingw-w64 etc.:
		freebasic-linux-x86
		freebasic-linux-x86-64
		freebasic-linux-arm
		freebasic-win32
		freebasic-win64 (or freebasic-mingw-w64-i386, freebasic-mingw-w64-x86-64, to match the mingw-w64 package names?)
		probably all using the lib*-dev format?
	and "freebasic" depends on the default libs for native compiling.
