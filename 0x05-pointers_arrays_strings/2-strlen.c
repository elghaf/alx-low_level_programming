#include "main.h"

/**
 * _strlen - returns the length of a string
 * @string_len: parameter
 *
 * Return: always 0
 */

int _strlen(char *string_len)
{
	int counter = 0;

	while (*string_len != '\0')
	{
		counter++;
		string_len++;
	}
	return (counter);
}
