void *ptr;  /* ptr is declared as void pointer */
char c;
int i;
float f;
struct S {
    int id;
    char *name;
} s;

ptr = &c;   /* ptr contains address of a character variable */
ptr = &i;   /* ptr contains address of an integer variable */
ptr = &f;   /* ptr contains address of a float variable */
ptr = &s;   /* ptr contains address of data with type stuct S */

*((char*)ptr);      /* access char data */
*((int*)ptr);       /* access int data */
*((float*)ptr);     /* access float data */
*((struct S*)ptr);  /* access struct S */
