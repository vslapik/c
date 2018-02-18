#include <stdio.h>

void func(int a, int *b)
{
    printf("%d %d\n", a, *b);
}

int main(void)
{
    int x = 0;

    func(x++, &x);

    return 0;

}
