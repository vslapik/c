struct H {
    char *key;
    int value;
};
int main(void)
{
    int a[4];                      /* uninitialized */
    char b[4] = {1, 2, 3, 4};      /* {1, 2, 3, 4} */
    short c[4] = {1, 2};           /* {1, 2, 0, 0} */
    long d[4] = {0, 0, 0, 0};      /* {0, 0, 0, 0} */
    int e[4] = {0};                /* {0, 0, 0, 0} */
    int f[4] = {[2] = 4, [0] = 1}; /* {1, 0, 4, 0}, since c99 */
    char g[] = {'a', 'z'};         /* {'a', 'z'} */
    struct H h[4] = {
        {"one", 1}, {"two", 2}, {"two", 3}, {0,  0},
    };
    char i[] = "code";  /* {'c', 'o', 'd', 'e', '\0'} */
    char j[4] = "code"; /* {'c', 'o', 'd', 'e'} */

    return 0;
}
