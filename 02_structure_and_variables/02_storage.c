#include <stdlib.h>
#include <stdio.h>

int a;            // data segment (bss)
int b = 1;        // data segment
static int c;     // data segment (bss)
static int d = 2; // data segment
extern int errno; // extern data

int main(void)
{
    static char A[1024 * 1024 * 128]; // data segment (bss)
    register int r;         // register or stack (automatic)
    short int k;            // stack (automatic)
    auto long int m;        // stack (automatic)
    void *ptr = malloc(16); // 16 bytes in the heap, ptr in stack

    return 0;
}
