#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @string_input: input the string.
 * 
 * Return: non return.
 */

void _puts(char *string_input)
{
	while (*string_input != '\0')
	{
		_putchar(*string_input++);
	}

	_putchar('\n');
}
