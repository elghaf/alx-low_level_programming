#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed.
 *
 * Description:
 * This function recursively prints a string in reverse order.
 * It starts by checking if the current character (*s) is not null.
 * If it is not null, the function makes a recursive call to itself
 * with the next character in the string (s + 1) and then prints
 * the current character (*s) using the _putchar function.
 * This process continues until the end of the string is reached,
 * at which point the function returns.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
