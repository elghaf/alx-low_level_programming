#include "main.h"

/**
 * _strncpy - Copies a string with a specified length.
 * @first_string: Pointer to the destination string.
 * @second_string: Pointer to the source string.
 * @n: Number of bytes to copy from the source string.
 *
 * Return: Pointer to the resulting string (first_string).
 */
char *_strncpy(char *first_string, char *second_string, int n)
{
	int i = 0, second_length = 0;

	while (second_string[i++])
	{
		second_length++;
	}

	for (i = 0; second_string[i] && i < n; i++)
	{
		first_string[i] = second_string[i];
	}

	for (i = second_length; i < n; i++)
	{
		first_string[i] = '\0';
	}

	return (first_string);
}
