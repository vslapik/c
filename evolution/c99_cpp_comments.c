#include <stdio.h>

int main(int argc, char **argv)
{
    int a = 20 //* comment */ 2
        + 79;
    printf("Compiled with --std=c%d\n\n", a);

    return 0;
}
