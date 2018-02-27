#include <stdarg.h>
#include <stdio.h>

void print_ptr(int count, ...)
{
    va_list ap;
    int i;
    va_start(ap, count);
    for(i = 0; i < count; i++)
        printf("%p\n", va_arg(ap, void *));
    va_end(ap);
}

int main(void)
{
    int *p;

    print_ptr(21, main, main, main, main, main, main, main, main, main, main,
                  main, main, main, main, main, main, main, main, 0, 0,    main);

    return 0;
}
