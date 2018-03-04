#include <stdio.h>

int main(void)
{
    int a[3] = {1, 2, 3};

    a[1] = 0;
    *(a + 1) = 0;
    *(1 + a) = 0;
    1[a] = 0;

    printf("%d %d %d\n",
        0[a], 1[a], 2[a]);

    return 0;
}
