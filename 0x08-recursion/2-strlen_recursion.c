#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to be measured.
 *
 * Description:
 * This function recursively calculates the length of a string by counting
 * the number of characters until the null terminator is reached.
 * It starts by initializing a variable `length` to 0.
 * Then, it checks if the current character (*s) is not null.
 * If it is not null, the function increments `length` by 1 and makes
 * a recursive call to itself with the next character in the string (s + 1).
 * The length is obtained by summing up the increments at each recursion level.
 * Finally, when the null terminator is reached, the function returns `length`,
 * which represents the length of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
