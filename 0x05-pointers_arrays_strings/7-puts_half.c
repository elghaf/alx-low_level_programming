#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
    int len = 0;
    int n;
    char *ptr = str;

    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }

    n = len / 2;
    if (len % 2 != 0)
        n++;

    for (int i = n; i < len; i++)
    {
        putchar(str[i]);
    }

    putchar('\n');
}
