#include <stdlib.h>

int main(void)
{
    int *ptr;

    ptr = malloc(42);
    /* ... */
    free(ptr);

    ptr[3] = 42;

    return 0;
}
