/* explore your process limits with ulimit -a utility */
/* explore binary sections with size utility */
/* change size of A to 256 Mb, what happened when executed? */
/* move A to initialized memory */

#include <stdio.h>
#include <stdlib.h>
#define SIZE (256 * 1024 * 1024)

int main(void)
{
    char A[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        A[i] = 0xcc;
    }

    printf("I'm here !!!\n");

    return 0;
}
