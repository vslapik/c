#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 0;
    int b = 0;

    *(true ? &a : &b) = 42;

    printf("%d %d\n", a, b);

    return 0;
}
