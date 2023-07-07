#include "main.h"

int check_pal(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return check_pal(s, 0, length - 1);
}

/**
 * check_pal - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @start: Start index.
 * @end: End index.
 *
 * Return: 1 if it is a palindrome, 0 if it is not.
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	if (s[start] != s[end])
		return 0;
	return check_pal(s, start + 1, end - 1);
}
