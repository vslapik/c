/* try to compile it with -Wpadded */

#include <stdio.h>

struct test {
    short a;
    int b;
    short c;
} s;

int main(void)
{
    printf("%zu\n", sizeof(s.a));
    printf("%zu\n", sizeof(s.b));
    printf("%zu\n", sizeof(s.c));
    printf("%zu\n", sizeof(s));

    return 0;
}
