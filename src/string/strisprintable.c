int strisprintable(char const *str)
{
    int i = 0;
    int p = 0;
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= 32 && str[i] <= 126))
            p++;
    }
    if (p == i)
        return 84;
    return 0;
}