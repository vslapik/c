#define cbrt(X) _Generic((X), long double: cbrtl, \
                              default: cbrt, \
                              float: cbrtf)(X)
