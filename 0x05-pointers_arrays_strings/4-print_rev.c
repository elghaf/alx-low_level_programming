#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: the string to print
 */
void print_rev(char *str)
{
	int length = 0;
	int index;
	int j;

	while (str[length] != '\0')
	{
		length++;
	}
	index = length - 1;
	for (j = length; j > 0; j--)
	{
		_putchar(str[index--]);
	}
	_putchar('\n');
}
