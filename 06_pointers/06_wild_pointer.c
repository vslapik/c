int main(void)
{
    int *p;         /* wild pointer */
    static int *q;  /* null pointer */

    *p = 42;

    return 0;
}
