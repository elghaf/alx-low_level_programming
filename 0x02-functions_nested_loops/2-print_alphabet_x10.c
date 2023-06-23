#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase,
 *                      followed by a new line.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              ten times, with each sequence followed by a newline character.
 *              It utilizes the _putchar function to output the characters.
 */
void print_alphabet_x10(void)
{
	char current_char;
	int iteration;

	for (iteration = 0; iteration < 10; iteration++)
	{
		for (current_char = 'a'; current_char <= 'z'; current_char++)
		{
			_putchar(current_char);
		}
		_putchar('\n');
	}
}
