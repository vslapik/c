int main(void)
{
    int i = 0;
    int x[20] = {0};

    i = i++;
    i = ++i;
    x[i] = i++;
    x[i++] = i;

    return 0;
}
