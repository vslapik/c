#include <stdlib.h>
#include <string.h>

struct item {
    int a;
    float b;
    char *name;
};

int main(void)
{
    struct item i = {0};        // OK

    struct item *j;
    j = malloc(sizeof(*j));
    memset(j, 0, sizeof(*j));   // not generally OK :-)

    struct item *k, kk = {0};
    k = malloc(sizeof(*k));
    *k = kk;                    // a bit clumsy but OK

    *k = (struct item){0};      // OK but works only since C99

    bzero(k, sizeof(*k));       // not OK, bzero is deprecated

    return 0;
}
