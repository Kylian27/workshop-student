//copy string src of size in string dest
char *strncpy(char *dest, const char *src, int n)
{
    for (int i = 0; src[i] <= n; i++)
        dest[i] = src[i];
    return dest;
}
//return sring destination