#include <limits.h>
#include <stdio.h>

foo(void)
{
    return UINT_MAX;
}

int main(void) {

    long long c = foo();

    printf("%lld\n", c);

    return 0;
}

// -1
