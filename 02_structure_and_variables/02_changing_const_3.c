#include <stdio.h>

const int a = 42;

int main(void)
{
    int *p = &a;

    printf("%d\n", a);

    *p = 43;

    printf("%d\n", a);

    return 0;
}
