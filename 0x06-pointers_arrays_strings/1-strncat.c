#include "main.h"

/**
 * _strncat - Concatenates two strings with a specified length.
 * @first_string: Pointer to the destination string.
 * @second_string: Pointer to the source string.
 * @n: Number of bytes to concatenate from the second string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *first_string, char *second_string, int n)
{
	int length_string = 0, i = 0;

	while (first_string[i++])
	{
		length_string++;
	}

	for (i = 0; second_string[i] && i < n; i++)
	{
		first_string[length_string++] = second_string[i];
	}

	return (first_string);
}
