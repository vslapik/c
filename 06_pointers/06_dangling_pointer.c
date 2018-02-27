#include <stdlib.h>

int main(void)
{
    char *p = malloc(16);

    /* do something with dp */

    free(p);         /* dp now becomes a dangling pointer */
    p = NULL;        /* dp is no longer dangling */

    return 0;
}
