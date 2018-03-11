#include <stddef.h>

union {
    struct {
        char *name;
        int pid;
        size_t size;
    } bits;
    long long align;
} descriptor;
