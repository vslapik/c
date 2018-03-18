#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include "generic_typename.h"

int main(void)
{
    printf("%s\n", typename('a'));
    printf("%s\n", typename(4));
    printf("%s\n", typename(4LLU));
    printf("%s\n", typename(0x80000000));
    printf("%s\n", typename(2147483648)); // the same as previous 0x80000000;
    printf("%s\n", typename(2147483648L));
    printf("%s\n", typename("string"));
    char s[] = "string";
    printf("%s\n", typename(s));
    const int i;
    printf("%s\n", typename(i));
    size_t st;
    printf("%s\n", typename(st));

    intmax_t im;
    printf("%s\n", typename(im));

    max_align_t ma;
    printf("max_align_t typename really is %s\n", typename(im));

    printf("max_align_t size %zu\n", sizeof(max_align_t));
    printf("long int size is %zu\n", sizeof(long int));
    printf("%zu\n", sizeof(_Complex long double));


    return 0;
}
