#include <stdlib.h>
#include <string.h>

struct name
{
    int namelen;
    char namestr[];
};

struct name *makename(char *newname)
{
    struct name *ret = malloc(sizeof(struct name) + \
                              strlen(newname) + 1);
    if(ret != NULL) {
        ret->namelen = strlen(newname);
        strcpy(ret->namestr, newname);
    }

    return ret;
}
