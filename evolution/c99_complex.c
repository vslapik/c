#include <stdio.h>
#include <complex.h>

int main(void) {
    double complex c1 = 1.0 + 2.0 * I;
    double complex c2 = 3.0 + 4.0 * I;
    double complex c3 = c1 + c2;
    double complex c4 = c1 * c2;

    printf("%.1f + %.1fi\n", creal(c1), cimag(c1));
    printf("%.1f + %.1fi\n", creal(c2), cimag(c2));
    printf("%.1f + %.1fi\n", creal(c3), cimag(c3));
    printf("%.1f + %.1fi\n", creal(c4), cimag(c4));

    return 0;
}

// 1.0 + 2.0i
// 3.0 + 4.0i
// 4.0 + 6.0i
// -5.0 + 10.0i
