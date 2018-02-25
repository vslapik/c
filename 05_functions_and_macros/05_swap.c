#include <stdio.h>

static void swap(int x, int y)
{
    int tmp;

    tmp = x, x = y, y = tmp;
}

int main(void)
{
    int x = 2, y = 3;

    printf("%u %u\n", x, y);
    swap(x, y);
    printf("%u %u\n", x, y);

    return 0;
}
