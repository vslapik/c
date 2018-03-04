void kill_all_humans(int n)
{
  // set up a buffer of n characters
  char *b = malloc(n);
  // do the work
  ...
  // free the buffer
  free(b);
}

