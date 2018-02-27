#include <stdlib.h>

int main(void)
{
    int a[2][2];
    int *p = malloc(16);

    a = (int [2][2])p;
}
