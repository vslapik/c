#include <stdio.h>
int main(void)
{
    int a, b;

    a = 0; b = 1;
    printf("%d\n", a+++++b);    /* Why it fails to compile */

    a = 0; b = 1;
    printf("%d\n", a+++ ++b);   /* and this one is compilable. */

    a = 0; b = 1;
    printf("%d\n", a++ + ++b);  /* This one is also OK, */

    a = 0; b = 1;
    printf("%d\n", a++ +++b);   /* but this one is not. */

    a = 0; b = 1;
    printf("%d\n", a + + + b);  /* Is this valid expression? */

    return 0;
}
