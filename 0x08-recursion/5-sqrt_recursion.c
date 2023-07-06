#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number using recursion.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if the input is invalid.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Recursive helper function to find the square root of a number.
 * @n: The number to calculate the square root of.
 * @start: The starting value to search for the square root.
 * @end: The ending value to search for the square root.
 *
 * Return: The resulting square root, or -1 if the square root is not a whole number.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid, square;
	int result;
	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
	{
		result = sqrt_helper(n, mid + 1, end);
		return (sqrt_helper(n, mid + 1, end));
	}

	else
	{
		result = sqrt_helper(n, start, mid - 1);
		return (sqrt_helper(n, start, mid - 1));
	}
}
