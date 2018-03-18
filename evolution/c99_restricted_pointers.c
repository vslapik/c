// memory areas must not overlap
void *memcpy(void * restrict s1,
             const void * restrict s2, size_t n);

// memory areas may overlap
void *memmove(void *s1, const void *s2, size_t n);
