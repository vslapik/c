#include <stdio.h>

char *str = "1234567890";

int main(void)
{
    int *pi;
    char *pc;

    struct S {
        int v[2];
    } *ps;

    printf("%p %p %p\n", pi, pc, ps);
    ++pi, ++pc, ++ps;
    printf("%p %p %p\n", pi, pc, ps);

    printf("%x\n", *((short *)str + 2));

    return 0;
}
