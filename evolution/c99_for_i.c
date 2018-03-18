#include <stdio.h>

int main(void)
{
    int i;

    // C89 loop
    for (i = 0; i < 42; i++)
        printf("%d\n", i);

    // C99 loop
    for (int j = 0; j < 42; j++)
        printf("%d\n", j);

    return 0;
}
