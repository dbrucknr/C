// When < and > are used, the header file is grabbed from the default directories.
#include <stdio.h>
// When doubled quotes are used, the file is grabbed from the local directory. (Same as the source code file)
// #include "structure-sample.c"
#include <time.h>
// Define is used for substitution - defines a constant
#define COUNT 10
#define GREETING "Hello!"
#define charout(a) putc(a, stdout)

int main()
{
    puts(GREETING);
    int a;
    for (a = 0; a < COUNT; a++)
        printf("%3d ", a);
    putchar('\n');
    charout('H');
    charout('i');
    charout('!');
    charout('\n');
    return 0;
}