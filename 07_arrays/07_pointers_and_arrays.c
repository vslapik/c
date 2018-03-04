#include <stdio.h>

int main(void)
{
    char a[3];
    char b[3];

    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    for (int i = 0; i < sizeof(a); i++)
        printf("%d\n", a[i]);

    char *pb = b;
    *(pb + 0) = 0;
    *(pb + 1) = 1;
    *(pb + 2) = 2;
    for (int i = 0; i < sizeof(b); i++)
        printf("%d\n", b[i]);

    return 0;
}
