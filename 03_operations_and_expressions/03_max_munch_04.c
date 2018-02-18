/*  Can you explain what this magic
 *  "arrow" operator really does?
 */

#include <stdio.h>

int main(void)
{
    int c = 42;

    printf("%u\n", c-->3);

    return 0;
}
