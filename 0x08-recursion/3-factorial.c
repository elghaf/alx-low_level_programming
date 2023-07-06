#include "main.h"

/**
 * factorial - Returns the factorial of a number using recursion.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if the input is invalid.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
