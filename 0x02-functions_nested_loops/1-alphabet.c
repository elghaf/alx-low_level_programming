#include "main.h"

/**
 *print_alphabet - print alphabets
 *Description: alphabet a-z in lowercase
 *Return: Always 0
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
