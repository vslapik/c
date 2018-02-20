#include <stdio.h>

int main(void)
{
    int i = 1;
    const int TWO = 2;

    switch (i)
    {
        case 1:
            puts("1");
            break;
        case TWO:
            puts("2");
            break;
    }

    return 0;
}
