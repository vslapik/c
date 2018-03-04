void (*signal(int signum, void (*handler)(int)))(int);


typedef void(*sighandler_t)(int);
sighandler_t signal(int signum, sighandler_t handler);

