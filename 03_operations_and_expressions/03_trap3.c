#include <stdio.h>

int main(void)
{
    unsigned char x = 0x0e; // 00001110
    unsigned char y = 0xfd; // 11111101
    unsigned char z; // 0x0c   00001100

    z = x && y;
    printf("0x%02x 0x%02x 0x%02x\n", x, y, z);

    return 0;
}
