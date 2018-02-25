#include <stdarg.h>
#include <stdio.h>

double average(int count, ...)
{
    va_list ap;
    int j;
    double tot = 0;
    va_start(ap, count);
    for(j = 0; j < count; j++)
        tot += va_arg(ap, double);
    va_end(ap);
    return tot / count;
}

int main(void)
{
    printf("%f\n", average(3, 1.0, 2.0, 6.0));
    printf("%f\n", average(1, 2.0));

    return 0;
}
