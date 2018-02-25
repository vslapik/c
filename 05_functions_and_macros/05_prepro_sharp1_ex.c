#include <stdio.h>

#define WARN_IF(EXP)                            \
    do { if (EXP)                               \
        fprintf(stderr, "Warning: " #EXP "\n"); \
    } while (0)

int main(int argc, char **argv)
{
    WARN_IF(argc == 1);

    return 0;
}
