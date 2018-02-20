#include <stdio.h>

int main(void)
{
    int i, j;
    char a[4] = {1, 2, 3, 4};

    // loop using two variables (operator ",")
    for (i = 0, j = 0; i < 5; i++, j += 2)
        printf("%d %d\n", ++i, j);
    // idiomatic way to iterate over array
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        printf("%d\n", a[i]);
    // faster way (due to comparasion to 0)
    for (i = sizeof(a) / sizeof(a[0]); i-- > 0; )
        printf("%d\n", a[i]);
    // you can put any statement in any position
    for (i = sizeof(a) / sizeof(a[0]); i--; printf("%d\n", a[i]))
        continue;

    return 0;
}
