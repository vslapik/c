#include <stdio.h>

int main(void)
{
    int i = 0;

    printf("%d", i++ ? 0 : 1);

    return 0;
}
