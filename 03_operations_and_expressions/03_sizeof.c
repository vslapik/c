#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    typedef struct {
        int a;
        char b;
    } S;

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof x);
    printf("%zu\n", sizeof(S));
    printf("%zu\n", sizeof("wazzaup"));

    x = malloc(10 * 4); // bad
    x = malloc(10 * sizeof(int)); // better
    x = malloc(10 * sizeof(*x));  // the best

    return 0;
}
