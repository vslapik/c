#include <stdlib.h>

static void func(void)
{
    int *a = NULL;

    a = malloc(42);

    /* ... */

}
int main(void)
{
    func();

    /* ... */

    return 0;
}
