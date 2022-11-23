int strisnum(char const *str)
{
    int i = 0;
    int p = 0;
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9'))
            p++;
    }
    if (p == i)
        return 84;
    return 0;
}
