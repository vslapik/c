#include <stdio.h>

#define SQR(I) (I * I)

int main(void)
{
    int x = 1;
    printf("%d", SQR(x + 2));

    return 0;
}
