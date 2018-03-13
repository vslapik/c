// Case-insensitive version of strcmp, POSIX
int strcasecmp(const char *s1, const char *s2);

// Allocate copy of a string, should be freed after using, POSIX.
char *strdup(const char *s);

// POSIX thread-safe equivalents for corresponding functions.
int strerror_r(int errnum, char *buf, size_t buflen);
char *strtok_r(char *str, const char *delim, char **saveptr);

// BSD size-bounded string copying and concatenation,
// not present on Linux (glibc).
size_t strlcpy(char *dst, const char *src, size_t dstsize);
size_t strlcat(char *dst, const char *src, size_t dstsize);

// Microsoft initiative, part of C11, controversal and
// not used on POSIX platforms.
errno_t strcpy_s(char *restrict dest, rsize_t destsz,
                 const char *restrict src);
errno_t strcat_s(char *restrict dest, rsize_t destsz,
                 const char *restrict src);
