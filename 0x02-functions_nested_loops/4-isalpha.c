#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters.
 * @character: The character to be checked.
 *
 * Return: 1 if @character is a letter, 0 otherwise.
 */
int _isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		return (1);
	else
		return (0);
}
