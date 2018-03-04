#include <fcntl.h>
#include <string.h>
#include <alloca.h>

static int open2(char *str1, char *str2, int flags, int mode)
{
    char *name = (char *)alloca(strlen(str1) + strlen(str2) + 1);
    stpcpy(stpcpy(name, str1), str2);

    return open(name, flags, mode);
}

int main(void)
{
    open2("/home/", "worm", O_RDWR, 0666);

    /* ... */

    return 0;
}
