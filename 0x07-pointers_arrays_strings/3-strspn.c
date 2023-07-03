#include "main.h"
/**
 * _strspn - Entry point
 * @s: input our character.
 * @accept: innput to accepts.
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int lookup[256] = {0};

    while (*accept)
    {
        lookup[(unsigned char)*accept] = 1;
        accept++;
    }
    while (*s && lookup[(unsigned char)*s])
    {
        n++;
        s++;
    }
    
    return n;
}
