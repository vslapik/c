errno_t qsort_s(void *base, rsize_t nmemb, rsize_t size,
    int (*compar)(const void *x, const void *y, void *context),
    void *context);

void *bsearch_s(const void *key, const void *base,
    rsize_t nmemb, rsize_t size,
    int (*compar)(const void *k, const void *y, void *context),
    void *context);
