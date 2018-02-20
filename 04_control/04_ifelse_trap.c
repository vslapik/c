#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;

    if (a == 2)
        if (b == 2)
            puts("***");
    else
        puts("###");

    return 0;
}
