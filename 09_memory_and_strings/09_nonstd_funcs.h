#include <unistd.h>
int brk(void *addr);
void *sbrk(intptr_t increment);

#include <sys/mman.h>
void *mmap(void *addr, size_t length, int prot,
           int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);

#include <alloca.h>
void *alloca(size_t size);

#include <malloc.h>
int mallopt(int param, int value);

#include <stdlib.h>
int posix_memalign(void **memptr, size_t alignment, size_t size);
