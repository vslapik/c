#include <stdio.h>

int main(void)
{
    signed char x = 8;
    signed char y = -128;
    unsigned char z = 8;

    printf("%d %d %d\n", x >> 1, x >> -1, x >> 25); // OK UB UB
    printf("%d %d %d\n", y >> 1, y >> -1, y >> 25); // ID UB UB
    printf("%d %d %d\n", z >> 1, z >> -1, z >> 25); // OK UB UB

    return 0;
}
