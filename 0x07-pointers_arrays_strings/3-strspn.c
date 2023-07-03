#include "main.h"

/**
 * _strspn - Entry point
 * @str: input
 * @chars: input
 * Return: The number of bytes in the initial segment of str which consist only of bytes from chars.
 */
unsigned int _strspn(char *str, char *chars)
{
    unsigned int count = 0;
    int i;

    while (*str)
    {
        for (i = 0; chars[i]; i++)
        {
            if (*str == chars[i])
            {
                count++;
                break;
            }
            else if (chars[i + 1] == '\0')
                return count;
        }
        str++;
    }
    return count;
}
