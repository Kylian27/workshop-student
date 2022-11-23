#include "strlen.h"

int astrncmp(char const *s1, char const *s2, int nb)
{
    int i = 0;

    while (i < nb && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (i == nb)
        return (0);
    return (s1[i] - s2[i]);
}
