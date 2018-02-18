/* what will be printed? try to compile with g++ */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = j = 0;

    (i, j) = 3;
    printf("%d %d\n", i, j);

    return 0;
}
