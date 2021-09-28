This is a port of the original Linux x86 IOLI crackme binaries to x86-64. The original set of IOLI crackmes can be found here: https://github.com/Maijin/radare2-workshop-2015/tree/master/IOLI-crackme. 

The original 32-bit binaries were built with GCC 3.4.6 on a Gentoo box:
 - ```GCC: (GNU) 3.4.6 (Gentoo 3.4.6-r2, ssp-3.4.6-1.0, pie-8.7.10)```

The ported 64-bit binaries were built with GCC 9.3.0 on an Ubuntu machine (see the [makefile](https://github.com/BinaryResearch/IOLI64/blob/main/source/Makefile) for more info):
 - ```GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0```

An approximation of the source code of the original IOLI binaries was created with the help of [Ghidra](https://github.com/NationalSecurityAgency/ghidra), [gef](https://github.com/hugsy/gef) and [various](https://dustri.org/b/defeating-ioli-with-radare2.html) [write-ups](https://book.rada.re/crackmes/ioli/intro.html). Aside from a few errors or deviations here and there, the the ported x86-64 binaries' behavior at runtime should closely resemble that of the originals. These binaries are relatively simple and well understood, so they should still be useful for learning x86-64 reverse engineering and/or how to use new tools.

Example use cases of the source code in this repository:
 - assisting newcomers to reverse engineering with understanding disassembled machine code
 - the code can be modified to create new crackme variants
 - a different compiler toolchain such as Clang can be used to build the binaries instead of GCC
 - these programs can be ported to other architectures such as MIPS or ARM
 
 Enjoy.
