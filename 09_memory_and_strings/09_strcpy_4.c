void func(char *s)
{

    char buf[BUF_SIZE];
    buf[BUF_SIZE - 1] = 0; // strlcpy approach

    /* ... */

    strncpy(buf, s, BUF_SIZE-1);

    /* ... */
}
