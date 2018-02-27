#include "stdio.h"

struct data_t *pdata;
int main(void)
{
    printf("%p\n", pdata);
    printf("%zu\n",
        sizeof(struct data_t));
    *pdata;
    return 0;
}
