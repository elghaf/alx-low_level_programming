#include "main.h"

/**
 * print_alphabet - Print all alphabets in lowercase.
 */
void print_alphabet(void)
{
	char c_char;
	for (c_char = 'a'; c_char <= 'z'; c_char++)
	{
		_putchar(c_char);
	}

	_putchar('\n');
}
