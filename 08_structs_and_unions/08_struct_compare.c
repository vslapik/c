#include <stdio.h>
#include <string.h>

struct cmp {
    int a;
    int b;
};

int main(void)
{

    struct cmp s1, s2; // try to define it globally
    printf("Now we will compare structures\n");
    if (memcmp(&s1, &s2, sizeof(struct cmp)) == 0)
        printf("Equal\n");
    else
        printf("Not equal\n");

    return 0;
}
