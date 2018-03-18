#include <stdio.h>
#include <stdalign.h>

int main(void)
{
    struct {
        char a;
        int b;
    } s1;

    printf("%zu %zu %zu\n", alignof(char), alignof(int),
                            alignof(s1));
    return 0;
}

// 1 4 4
