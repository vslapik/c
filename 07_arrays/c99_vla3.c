double *a;
a = malloc(m * n * sizeof(*a));
for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j)
        a[i*n + j] = 1.0;
