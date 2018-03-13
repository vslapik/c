void func(char *s)
{

    char buf[BUF_SIZE];

    /* ... */

    if (strlen(s) >= BUF_SIZE)
        abort();                // indicate error somehow here
    else
        strcpy(buf, s);
}
