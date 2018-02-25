#include <stdio.h>

int main(void)
{
    printf("Compiled on '%s %s'\n",
        __DATE__, __TIME__);
    printf("We are in '%s' (%s:%u)\n",
        __func__, __FILE__, __LINE__);

#ifdef __cplusplus
    printf("g++ in use\n.");
#else
    printf("gcc in use, STD version is %lu\n.",
        __STDC_VERSION__);
#endif

    return 0;
}
