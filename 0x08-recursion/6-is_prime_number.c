#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to determine if a number is prime.
 * @n: The number to evaluate.
 * @i: Iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}
