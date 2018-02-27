#include <unistd.h>
#include <signal.h>
#include <string.h>

static void handler(int sig, siginfo_t *siginfo, void *context)
{
    #define MSG "Got SIGTERM\n"
    write(STDOUT_FILENO, MSG, sizeof(MSG));
}
int main (int argc, char *argv[])
{
    struct sigaction act;
    memset(&act, 0, sizeof(act));
    act.sa_sigaction = handler;
    act.sa_flags = SA_SIGINFO;

    if (sigaction(SIGTERM, &act, NULL) != 0)
    {
        perror ("sigaction");
        return 1;
    }

    for (;;)
        sleep (10);

    return 0;
}
