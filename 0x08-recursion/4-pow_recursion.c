#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y using recursion.
 * @x: The base value.
 * @y: The power to raise the base value to.
 *
 * Return: The value of x raised to the power of y, or -1 if the input is invalid.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	int result = _pow_recursion(x, y / 2);

	if (y % 2 == 0)
		return (result * result);
	else
		return (x * result * result);
}
