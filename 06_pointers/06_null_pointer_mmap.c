#include <stdio.h>
#include <sys/mman.h>

int main(void)
{
    int *p;

    p = mmap(0, 4096, PROT_READ|PROT_WRITE,
        MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);

    *p = 42;

    printf ("p=%p; *p=%d\n", p, *p);

    return 0;
}
