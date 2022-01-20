// Header files are found on a UNIX system in the /usr/include sub-directory
// Example: stdio.h
#include <stdio.h>
// Library files are found in the /usr/lib sub-directory

// They are not the same. (lib and header files)
// Header files contain function prototypes, definitions, macros, etc.
// man page describes which header file to include

// Libraries provide the muscle behind common C language functions
// Example linking process: clang test-math.c -lm