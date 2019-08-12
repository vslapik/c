int a;
int *p = &a;
int main(void) {
    a = *p++ ? *p++ : *p--;
    *p = *p++ ? *p++ : *p--;
}
