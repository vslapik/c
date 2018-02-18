/* Can you spot and correct a mistake here? */

#include <stdio.h>

int main(void)
{
    float a = 4321;
    float b = 1234;
    float *pa = &a;
    float *pb = &b;

    float c = *pa/*pb;

    printf("%f\n", c);

    return 0;
}
