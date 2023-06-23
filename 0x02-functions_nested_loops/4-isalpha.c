#include "main.h"

/**
 * _isalpha - checks if char is a letter
 *@character: parameter
 *Return: 1 if letter and 0 orherwise
 */
int _isalpha(int character)
{
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		return (1);
	else
		return (0);
}
