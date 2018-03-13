#include <stdlib.h>

int main(void)
{
    int *ptr = NULL;

    ptr = malloc(42);
    if (ptr)
    {
        /* ... */

        free(ptr);
    }
    free(ptr);

    return 0;
}
