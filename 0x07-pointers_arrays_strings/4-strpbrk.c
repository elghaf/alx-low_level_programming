#include "main.h"

/**
 * _strpbrk - Entry point
 * @str: input
 * @chars: input
 * Return: A pointer to the first occurrence in str of any character from chars, or NULL if no match is found.
 */
char *_strpbrk(char *str, char *chars)
{
    int i;

    while (*str)
    {
        for (i = 0; chars[i]; i++)
        {
            if (*str == chars[i])
                return str;
        }
        str++;
    }

    return ('\0');
}
