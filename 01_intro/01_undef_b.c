/* don't run as it may summon nasal demons from your nose */

#include <limits.h>
#include <stdio.h>

int main(void)
{
    int x = INT_MAX;
    printf("%u\n", (x + 1) > 0);

    return 0;
}
