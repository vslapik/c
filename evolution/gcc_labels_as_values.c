#include <stdio.h>

int main(int argc, char **argv)
{
    void *ptr;
    int i = 1;
    ptr = &&foo;

    static void *array[] = { &&foo, &&bar, &&end };
    goto *array[i];

foo:
    i = 10;
    goto end;
bar:
    i = 2;
    goto *ptr;
end:
    printf("%u\n", i);

    return 0;
}
