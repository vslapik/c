#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t port = 0x5a;
    uint8_t result_8 = ~port >> 4;

    printf("0x%02x\n", result_8);

    return 0;
}
