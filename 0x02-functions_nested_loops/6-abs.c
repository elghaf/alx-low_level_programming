#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @int_check: The integer to check.
 *
 * Return: The absolute value of @int_check.
 */
int _abs(int int_check)
{
	if (int_check >= 0)
	{
		return (int_check);
	}
	return (-int_check);
}
