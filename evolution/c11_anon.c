struct v {
    union { // anonymous union
        struct { int i, j; }; // anonymous structure
        struct { long k, l; } w;
    };
    int m;
} v1;

int main(int argc, char **argv)
{
    v1.i = 2; // valid
    v1.k = 3; // invalid: inner structure is not anonymous
    v1.w.k = 5; // valid

    return 0;
}


