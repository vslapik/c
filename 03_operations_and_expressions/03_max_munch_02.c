#include <stdio.h>
int main(void)
{
    int a, b;                   /* parsed,      computed    */

    a = 0; b = 1;
    printf("%d\n", a+++++b);    /* a ++ ++ + b, ((a++)++)+b */

    a = 0; b = 1;
    printf("%d\n", a+++ ++b);   /* a ++ + ++ b, (a++)+(++b) */

    a = 0; b = 1;
    printf("%d\n", a++ + ++b);  /* as is */

    a = 0; b = 1;
    printf("%d\n", a++ +++b);   /* a ++ ++ + b, ((a++)++)+b */

    a = 0; b = 1;
    printf("%d\n", a + + + b);  /* a + + + b,   a+(+(+b))   */

    return 0;
}
