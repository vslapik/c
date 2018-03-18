#include <string.h>
#include <stdio.h>
#define MAGIC_NUMBER 42

int main(int argc, char **argv)
{
    char s1[MAGIC_NUMBER] = u8"Привет ";
    const char *s2 = u8"мир!";

    strcat(s1, s2);

    return printf("%s\n", s1);
}
