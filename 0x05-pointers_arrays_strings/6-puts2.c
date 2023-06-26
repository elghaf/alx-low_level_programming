#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
    int index;
    char *ptr = str;

    for (index = 0; *ptr != '\0'; index++, ptr++)
    {
        if (index % 2 == 0)
        {
            putchar(*ptr);
        }
    }

    putchar('\n');
}
