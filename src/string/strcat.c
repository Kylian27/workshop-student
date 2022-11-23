#include "strlen.h"

char *strcat(char *dest, char *src)
{
    int i = strlen(dest);
    int j = 0;
    for (; src[j] != '\0'; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}
