#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @first_string: First string to compare.
 * @second_string: Second string to compare.
 *
 * Return: 0 if the strings are equal, non-zero otherwise.
 */
int _strcmp(char *first_string, char *second_string)
{
	while (*first_string && *second_string && *first_string == *second_string)
	{
		first_string++;
		second_string++;
	}
	
	return (*first_string - *second_string);
}
