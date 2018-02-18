/* try to compile for 32 [-m32 on gcc] and 64 bit */
#include <stdio.h>

int main(void)
{
    long int a = -1;
    unsigned int b = 1;

    if (a > b)
        puts("a");
    else
        puts("b");

    return 0;
}
