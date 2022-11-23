/*
 * find the first occurence of
 * the needle in the haystack
*/

#include "strlen.h"
char *findstr( char *haystack, const char *needle)
{
    int j = 0;
    for (int i = 0; haystack[i] != 0; i++) {
        if (haystack[i] == needle[j])
            j++;
        if (j == strlen(needle)) {
            return haystack + (i - j);
        }
    }
    return 0;
}