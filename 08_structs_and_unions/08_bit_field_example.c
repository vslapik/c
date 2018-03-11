#include <stdbool.h>

struct page {
    char* name;
    int is_writable:1;
    int is_readable:1;
    int is_executable:1;
    int :4;          // padding
    int value:3;
    int address:14;
    int :0;          // force alignment to a new word
    int next_page:14;
    signed int t1:20;
    unsigned int t2:20;
    bool is_valid:1; // since C99
    long long t3:42; // GCC extension
};

int main(void)
{
    struct page p1;
}
