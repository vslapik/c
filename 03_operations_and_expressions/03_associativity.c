/* what will be printed and why? */
#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 5;
    int c = 3;

    printf("%s\n", (a > b > c) ? "true" : "false");

    return 0;
}
