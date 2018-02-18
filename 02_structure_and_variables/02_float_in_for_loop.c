/* how many iterations do you expect? */
/* try to change the type of loop variable to double */
#include <stdio.h>

int main(void)
{
    float x;
    for (x = 100000001.0; x <= 100000010.0; x++)
    {
        printf("%f\n", x);
    }
}
