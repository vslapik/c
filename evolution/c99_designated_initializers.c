#include <stdio.h>
int main(void)
{
    struct xyz {
       int a;
       int b;
       int c;
       int d;
    } klm = { .a = 99, .c = 100 };

    int aa[4] = { [2] = 3, [1] = 6 };

    printf("%d, %d, %d, %d\n", klm.a, klm.b, klm.c, klm.d);
    printf("%d, %d, %d, %d\n", aa[0], aa[1], aa[2], aa[3]);
}

// 99, 0, 100, 0
// 0, 6, 3, 0
