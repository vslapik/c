struct point {
    int x;
    int y;
};

static void draw_line(struct point p1, struct point p2)
{
    /* ... */
}

int main(void)
{

    /* ... */

    draw_line((struct point){1, 0}, (struct point){22, 44});

    return 0;
}
