#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number using recursion.
 * @n: The number to calculate the square root of.
 *
 * Description:
 * This function calculates the square root of a given number using recursion.
 * It takes an input number `n` and recursively performs an approximation of the square root.
 * The function starts by checking if `n` is less than 0. If it is, the function returns -1
 * to indicate an invalid input.
 * 
 * Return: The resulting square root, or -1 if the input is invalid.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: Iterator.
 *
 * Description:
 * This function recursively calculates the square root of a given number.
 * It takes an input number `n` and an iterator `i`, 
 * which represents the current approximation.
 * 
 * Return: The resulting square root, or -1 if the square root is not a whole number.
 */
int actual_sqrt_recursion(int n, int i)
{
	int a,b;

	a = n;
	b = i;
	if (b * b > a)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
