#include "strlen.h"

int strcmp(char const *s1, char const *s2)
{
    int result = 0;
    int len_first = strlen(s1);
    int len_second = strlen(s2);
    int len = len_first < len_second ? len_first : len_second;

    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            result = s1[i] - s2[i];
            break;
        }
    }
    if (result == 0)
    {
        result = len_first - len_second;
    }
    if (result > 0)
    {
        return 1;
    }
    else if (result < 0)
    {
        return -1;
    }
    return 0;
}
