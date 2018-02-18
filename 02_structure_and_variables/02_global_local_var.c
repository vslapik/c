#include <stdio.h>

int var;

int main(void)
{
    printf("global var value %d\n", global);

    int local;
    printf("local var value %d\n", local);
    {
        int global = 3;
        printf("var value %d\n", global);
    }
    printf("global var value %d\n", global);
}
