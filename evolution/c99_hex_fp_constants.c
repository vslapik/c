#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    double d;

    d = 3.1415926;
    printf("3.1415926 in HEX: %A\n", d);

    d = 0.1;
    printf("0.1 in hex: %a\n", d);

    return 0;
}

// 3.1415926 in HEX: 0X1.921FB4D12D84AP+1
// 0.1 in hex: 0x1.999999999999ap-4

