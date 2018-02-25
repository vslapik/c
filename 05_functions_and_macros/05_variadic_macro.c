#include <stdio.h>

#define eprintf(...) printf (stderr, __VA_ARGS__)

#define VA_NUM_ARGS(...) VA_NUM_ARGS_IMPL(0, ## __VA_ARGS__, 5,4,3,2,1,0)
#define VA_NUM_ARGS_IMPL(_0,_1,_2,_3,_4,_5,N,...) N


int main(void)
{
    dprintf("Something goes wrong here ...");
    dprintf("The %s function", __func__);

    VA_NUM_ARGS(x,y,z)
    VA_NUM_ARGS(x,y)
    VA_NUM_ARGS(x)
    VA_NUM_ARGS()
    return 0;
}


