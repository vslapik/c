#include <stdio.h>

int main(void)
{
    printf("value %zu\n", sizeof(5));
    printf("value %zu\n", sizeof(5L));
    printf("value %zu\n", sizeof(5LL));
    printf("value %zu\n", sizeof(5.0));
    printf("value %zu\n", sizeof(5.0F));
    printf("value %zu\n", sizeof(5.0L));
    printf("value %zu\n", sizeof('x'));

    return 0;
}
