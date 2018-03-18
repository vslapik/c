int open2(char *str1, char *str2, int flags, int mode)
{
    char *name = (char *)alloca(strlen(str1) + strlen(str2) + 1);
    stpcpy(stpcpy(name, str1), str2);

    return open(name, flags, mode);
}
