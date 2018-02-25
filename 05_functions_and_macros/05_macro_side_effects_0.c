#include <stdio.h>

#define SQR(x) ((x) * (x))
int main(void)
{
    int x = 3;
    printf("%u\n", SQR(x++));
    return 0;
}
