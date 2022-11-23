int strisupper(char *str)
{
    int i = 0;
    int p = 0;
    for (; i != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
            p++;
    }
    if (p == i)
        return 84;
    return 0;
}
