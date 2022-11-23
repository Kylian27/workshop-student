//verrif if only lowcase charactère in src 
int strislowcase(const char *src)
{
    for (int i = 0; src[i] != 0; i++)
        if (src[i] < 97 && src[i] > 122)
            return -1;
    return 0;
}

// return 0 if only lowcase
