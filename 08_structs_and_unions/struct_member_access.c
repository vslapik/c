#include <stdio.h>
#include <string.h>

struct name {
   char *name;
   size_t len;
};

int main(void)
{
    struct name S = {"holla", strlen("holla")};
    struct name *ptr = &S;

    puts(S.name);
    puts((*ptr).name); // not the same as *ptr.name
    puts(ptr->name);

    return 0;
}
