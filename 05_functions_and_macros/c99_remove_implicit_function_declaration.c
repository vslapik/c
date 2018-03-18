/* -fno-builtin */
/* #include <stdlib.h> is missing */

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        char *ptr = (char *)malloc(0x10000000);
        *ptr = 'a';
    }

    return 0;
}
