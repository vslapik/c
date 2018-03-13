#include <stdlib.h>

void *malloc(size_t size);
void *calloc(size_t num, size_t size);
void *realloc(void *block, size_t size);
void free(void *block);
void *aligned_alloc(size_t alignment, size_t size); // C11
