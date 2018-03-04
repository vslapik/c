#include <stdio.h>

int a[3][4] = {
     {0, 1, 2, 3},    /*  initializers for row indexed by 0 */
     {4, 5, 6, 7},    /*  initializers for row indexed by 1 */
     {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};

int b[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int main(void)
{
    printf("%d\n", b[2][3]);
    return 0;
}
