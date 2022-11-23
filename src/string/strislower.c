//verrif if only lower charactère in src 
int strislower(const char *src)
{
    for (int i = 0; src[i] != 0; i++)
        if (src[i] < 97 && src[i] > 122)
            return -1;
    return 0;
}

// return 0 if only lower
