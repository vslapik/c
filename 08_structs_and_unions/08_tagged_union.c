enum shape_kind {
     SQUARE,
     RECTANGLE,
     CIRCLE,
};

struct shape {
    int x;
    int y;
    enum shape_kind kind;
    union {
        struct { int side; };           /* SQUARE */
        struct { int length, height; }; /* RECTANGLE */
        struct { int radius; };         /* CIRCLE */
    };
};
