#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define FREE(ptr)          \
    do {                   \
        if (ptr != NULL) { \
            free(ptr);     \
            ptr = NULL;    \
        }                  \
    } while (0)

#define CHKPTR(ptr)        \
    do {                   \
        if (ptr == NULL)   \
            printf("Bad ptr in %s:%u\n", __FILE__, __LINE__); \
    } while (0)
