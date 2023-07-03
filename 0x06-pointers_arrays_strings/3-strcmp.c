#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @first_string: Pointer to the first string.
 * @second_string: Pointer to the second string.
 *
 * Return: 0 if the strings are equal, a non-zero value otherwise.
 *
 * Description: This function compares the characters of two strings, pointed
 *              to by first_string and second_string. It starts comparing the
 *              characters until a null byte ('\0') is encountered in either
 *              string or if the characters being compared are different.
 *              If the strings are equal, it returns 0. Otherwise, it returns
 *              a non-zero value representing the difference between the ASCII
 *              values of the differing characters.
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
