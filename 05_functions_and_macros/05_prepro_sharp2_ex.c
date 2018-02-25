struct command
{
   char *name;
   void (*function) (void);
};

struct command commands[] =
{
   { "quit", quit_command },
   { "help", help_command },
   ...
};

#define COMMAND(NAME)  { #NAME, NAME ## _command }

struct command commands[] =
{
   COMMAND (quit),
   COMMAND (help),
   ...
};
