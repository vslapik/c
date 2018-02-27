int main(void)
{
    int a;
    int b;
    int const *ptr_a = &a;
    int *const ptr_b = &b;

    *ptr_a = 42;
    ptr_a = &b;

    *ptr_b = 42;
    ptr_b = &a;

    return 42;
}
