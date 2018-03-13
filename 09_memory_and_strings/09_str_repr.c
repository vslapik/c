#include <stdio.h>

int main(void)
{
    char *s1 = "Hi world!";
    char s2[] = {
        'H', 'i', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'
    };
    char s3[] = "Hi world!";
    char s4[20] = "Hi world!";
    char s5[2] = "Hi world!";

    puts(s1);
    puts(s2);
    puts(s3);
    puts(s4);
    puts(s5);

    return 0;
}
