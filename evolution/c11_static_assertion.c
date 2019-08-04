#include <assert.h> // for static_assert macro
#include <stddef.h>

struct __attribute__((packed)) B {
    char a;
    int i;
};

struct A{
    struct B b;
    _Static_assert(offsetof(struct B, i) == 1,
                   "B is not packed");
};

int main(int argc, char **argv)
{
    static_assert(sizeof(void *) == 4,
        "64-bit code generation is not supported");
    return 0;
}
