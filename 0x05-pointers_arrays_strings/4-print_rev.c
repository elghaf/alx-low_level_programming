#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @str: a string to print
 */
void print_rev(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;
	int dec = length - 1;
    for (int i = dec; i >= 0; i--)
        putchar(str[i]);

    putchar('\n');
}
