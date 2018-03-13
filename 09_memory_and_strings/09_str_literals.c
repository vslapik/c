/* explore the executable with 'strings' util */

#include <stdio.h>

int main(void)
{
    char *s = "Hello world!";
    char *s2 = "Hello "
               "world"  "!" "!"
               "!";
    puts(s2);
    s[0] = 'h'; // attemp to modify string literal
    puts(s);

    return 0;
}
