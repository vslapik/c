#include <stdio.h>

double foo(double a, double b)
{
   double square(double z){ return z * z; }

   return square(a) + square(b);
}

int main(int argc, char **argv)
{
    printf("%f\n", foo(1.0, 2.0));

    return 0;
}

// 5.000000
