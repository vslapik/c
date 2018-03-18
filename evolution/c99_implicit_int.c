#include <stdio.h>

main()
{
    static x = 0;
    volatile y = x;
    const i = 1000;
    register j;

    printf("Implicit int is dead.\n");

    return 0;
}
