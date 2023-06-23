#include "main.h"

/**
 * _islower - Check if a character is lowercase.
 * @character: The character to be checked.
 *
 * Return: 1 if the character is lowercase, else 0.
 */
int _islower(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else
		return (0);
}
