#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    printf("%zu", sizeof(FILE));
    file = fopen("keylogger.txt", "r");
    if (file == NULL) {
        perror("Error");
        //fclose(file);
    }

    return 0;
}
