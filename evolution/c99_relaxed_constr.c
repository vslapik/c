#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct S{
    int sa;
    int sb;
    int sc;
};

int main(int argc, char **argv)
{
    srand(time(0));
    struct S bar = {argc * 2, rand(), __LINE__};
    printf("%d, %d, %d\n", bar.sa, bar.sb, bar.sc);

    return 0;
}
