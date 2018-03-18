struct point {int x, y;};

void drawpixel(struct point p)
{
    // nothing
}

void line(void)
{
    for (int i = 0; i < 10; i++)
    {
        drawpixel((struct point) {i, i});
    }
}

int main(void)
{
    drawpixel((struct point){5, 5});
    line();

    return 0;
}
