/* -pedantic */
#include <stdio.h>

int main(void)
{
    int x = 4;

    {
        int x = 5;
        printf("%d\n", x);

        int y = 11;
        printf("%d\n", y);
    }
    printf("%d\n", x);

    return 0;
}
