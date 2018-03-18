_Noreturn void fatal (void);

void fatal() {
    printf("Fatal error occured.")
    exit(1);
}

int main(int argc, char **argv)
{
    if (argc == 1)
        fatal();

    return 0;
}
