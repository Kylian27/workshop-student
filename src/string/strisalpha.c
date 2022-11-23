int strisalpha(char const *str)
{
    int i = 0;
    int p = 0;
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            p++;
    }
    if (p == i)
        return 84;
    return 0;
}
