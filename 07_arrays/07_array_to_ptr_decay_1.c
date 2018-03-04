#include <stdio.h>

int main(void)
{
    int a[3] = {0, 0, 0};
    int b[3] = {1, 2, 3};
    int i;

    a = b;

    for (i = 0; i < sizeof(a)/sizeof(*a); i++)
        printf("%d %d\n", a[i], b[i]);

    return 0;
}
