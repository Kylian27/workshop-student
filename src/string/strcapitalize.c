char *strcapitalize(char *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (i == 0)
                str[i] = str[i] - 32;
            else if (str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')
                str[i] = str[i] - 32;
        }
    }
    return str;
}