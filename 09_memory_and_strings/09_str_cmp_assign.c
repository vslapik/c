#include <string.h>
#include <stdio.h>

int main(void)
{
    char s1[] = "Hello ";
    char* s2 = "world!";

    if (strcmp(s1, s2) == 0) // can't use just s1 == s2
        puts("Equal\n");
    else
        puts("Not equal\n");

    strcpy(s1, s2);         // can't use just s1 = s2

    if (strcmp(s1, s2) == 0) 
        puts("Equal\n");
    else
        puts("Not equal\n");

    return 0;
}
