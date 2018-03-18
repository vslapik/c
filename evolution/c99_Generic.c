#define cbrt(X) _Generic((X), long double: cbrtl, \
                              default: cbrt, \
                              float: cbrtf)(X)

int main(void)
{
    int i = 8;
    double d = 9;
    float f = 10;

    cbrt(i), cbrt(d), cbrt(f);

    return 0;
}
