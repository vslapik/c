#include <stdio.h>

int main(int argc, char **argv) {
    int i = 1;
    if (i) { // why is this always false???/
        printf("Hello, World!\n");
    }

    return 0;
}
