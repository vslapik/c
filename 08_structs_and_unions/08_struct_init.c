struct item {
    int a;
    float b;
    char *name;
};

int main(void)
{
    struct item i = {5, 2.2, "Jonny"};
    struct item j = {6};
    struct item k = {0};

    // designated initializer, since C99
    struct item l = { .name = "Bill", .a = 42, .b = 3.3 };

    // compound literal, since C99
    struct item m;
    m = (struct item){4, 2.0, "Eddy"};

    /* ... */

    return 0;
}
