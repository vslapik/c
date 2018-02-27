char *ptr = malloc(SIZE);

/* ... */

if (something) {
  free(ptr);
}

/* ... */

free(ptr);
