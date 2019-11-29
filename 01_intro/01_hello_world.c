/* 1. compile with -v to see the compilation steps */
/* 2. compile with -save-temps to see the intermediate files */

#include <stdio.h>

#define MAGIC_NUMBER 42

int main(int argc, char **argv)
{
    printf("Hello, world!\n");
    printf("%d\n", MAGIC_NUMBER);

    return 0;
}
