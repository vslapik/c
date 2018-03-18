#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp = fopen("BroodWar.mpq", "wx");
    if (fp == NULL)
    {
        puts("Couldn't open file or file already exists");
        exit(0);
    }
    else
    {
        fputs("junk", fp);
        puts("Junked!");
        fclose(fp);
    }
    return 0;
}
