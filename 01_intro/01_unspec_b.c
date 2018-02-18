/* what will be the output of the program? */

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    int n = sum(printf("Hello "), printf("world!"));
    printf("\n%d\n", n);

    return 0;
}
