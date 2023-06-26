#include "main.h"
/**
 * _strlen - returns the lengh of a string 
 * @string_len : input string
 * Return : length of our string input.
 *
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

