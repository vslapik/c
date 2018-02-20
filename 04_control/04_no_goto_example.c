bool sh_happened = false;
for (...)
{
    for (...)
    {
        for (...)
        {
            if (...)
            {
                sh_happened = true;
                break;
            }
        }
        if (sh_happened)
            break;
    }
    if (sh_happened)
        break;
}
if (sh_happened)
    return some_error;
return im_fine;

