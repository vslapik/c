struct mystruct {
    int a;
    char b[10];
    long *d;
    struct mystruct *e;
};
typedef struct mystruct mystruct_t;
mystruct_t a;

typedef struct {
    int x;
    struct mystruct y;
} mystruct2_t;
mystruct2_t b;
