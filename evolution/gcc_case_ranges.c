int main(int argc, char **argv)
{
    char a = 'A';

    switch (a)
    {
        case 'A' ... 'Z':
            /* do something */
            break;
        case 'a' ... 'z':
            /* do something else */
            break;
    }

    return 0;
}
