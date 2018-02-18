/* what's wrong here? */
#include <stdio.h>

int ping(unsigned char a, unsigned char b,
         unsigned char c, unsigned char d)
{
    // do all stuff

    return 0;
}

int main(void)
{
    ping(192, 168, 121, 221);
    ping(192, 168, 121, 121);
    ping(192, 168, 121, 021);

    return 0;
}
