#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @first_string: Pointer to the first string.
 * @second_string: Pointer to the second string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *first_string, char *second_string)
{
	int first = 0, second = 0;

	while (first_string[first])
	{
		first++;
	}

	for (second = 0; second_string[second] != 0; second++)
	{
		first_string[first] = second_string[second];
		first++;
	}
	first_string[first] = '\0';
	return (first_string);
}
