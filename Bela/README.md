Csound for Bela
=========================================

Csound for Bela is provided in two forms:

1. BelaCsound.cpp: setup(), render(), an cleanup() functions
to be used in Bela C++ projects, requiring linking to the Csound library

2. belacsound: a standalone executable, built from CMake with -DBUILD_BELA=1

Cross-compiling instructions
=========================================

1. Setup your cross-compiling toolchain for armhf. On Debian stretch
this means apt-get install arm-linux-gnueabihf-g++ cross-compile-essential-arm
libsndfile1-dev:armhf libasound-dev:armhf

2. Build and install xenomai for armhf.

3. Build libbela and libbelaextra for armhf.

4. Build libNE10 for armhf and replace the one in Bela/lib/libNE10.a.

5. Build Csound for armhf

'''
cmake -DCMAKE_TOOLCHAIN_FILE=../Bela/crosscompile.cmake \
      -DCMAKE_INSTALL_PREFIX=$HOME -DUSE_DOUBLE=0 -DBUILD_BELA=1 ..
'''

The belacsound program should appear in your build directory







