#include <stdalign.h>
#include <stddef.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    alignas(16) struct S {
        int a;
        char b;
    } s1;

    printf("%zu %zu\n", sizeof(s1), alignof(s1));

    return 0;
}

// 8 16
