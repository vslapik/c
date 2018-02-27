#include <stdio.h>

extern char *a;
//extern char a[29];

int main(void)
{
    printf("%s\n", a);
}
