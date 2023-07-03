#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
    int found;

    while (*s)
    {
        found = 0;
        for (char *a = accept; *a; a++)
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
        }
        if (!found)
            return n;
        n++;
        s++;
    }
    return n;
}
