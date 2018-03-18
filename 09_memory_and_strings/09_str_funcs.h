char *strcpy(char * restrict s1, const char * restrict s2);
char *strcat(char * restrict s1, const char * restrict s2);
char *strncpy(char * restrict s1, const char * restrict s2,
              size_t n);
char *strncat(char * restrict s1, const char * restrict s2,
              size_t n);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
size_t strspn(const char *s1, const char *s2);
size_t strcspn(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strpbrk(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);
char *strtok(char * restrict s1, const char * restrict s2);
char *strerror(int errnum);
int strcoll(const char *s1, const char *s2);
size_t strxfrm(char * restrict dest, const char * restrict src, 
               size_t n);
