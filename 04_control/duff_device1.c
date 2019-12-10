send(to, from, count)
    register short *to;
    register short *from;
    register count;
{
    do
        *to = *from++;
    while (--count > 0);
}
