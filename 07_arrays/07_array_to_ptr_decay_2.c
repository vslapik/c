#include <stdio.h>

static void func(char x[42])
{
    printf("%zu\n", sizeof(x));
}

int main(void)
{
    char a[42] = {0};

    printf("%zu\n", sizeof(a));
    func(a);

    return 0;
}

