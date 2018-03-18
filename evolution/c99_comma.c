struct S {
    char *a;
    char *b;
    char *c;
};

struct S s = {
    "one",
    "two",
    "three", /* trailing comma allowed */
};

char *a[] = {
    "one",
    "two",
    "three", /* trailing comma allowed */
};

enum numbers {
    ONE,
    TWO,
    THREE, /* trailing comma allowed scince C99 */
};
