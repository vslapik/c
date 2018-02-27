#include <stdlib.h>

int main(void)
{
    int *iptr;
    char *cptr;

    __asm__(
        "pushf\n"
        "orl $0x40000, (%rsp)\n"
        "popf\n"
    );

    cptr = malloc(1000);
    cptr++;
    iptr = (int *)cptr;
    *iptr = 1;

    return 0;
}
