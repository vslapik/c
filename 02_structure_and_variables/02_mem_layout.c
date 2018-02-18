/* try with ASLR (Address Space Layout Randomization) disabled:
 * sudo sh -c "echo 0 > /proc/sys/kernel/randomize_va_space"
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

extern char etext, edata, end;
int main(int argc, char *argv[])
{
    printf("First address past\n");
    printf("    program text (etext):     %20p\n", &etext);
    printf("    initialized data (edata): %20p\n", &edata);
    printf("    uninitialized data (end): %20p\n", &end);
    printf("Program break (brk):          %20p\n", sbrk(0));
    printf("Address of argc:              %20p\n", &argc);
    printf("Address of errno:             %20p\n", &errno);
    printf("Address of printf:            %20p\n", printf);
    printf("Address of malloced memory:   %20p\n", malloc(16));
    return 0;
}
