/* -std=c11 -pedantic */
#include <stdalign.h>
#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
    printf("%zu\n", alignof(max_align_t));

    return 0;
}

// 16
