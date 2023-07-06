#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - 
 * returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - 
 * recurses to find the natural
 * @n: number to calculate t
 * he sqaure root of
 * square root of a number
 * @i: iterator
 * Return: the resulting square root
*/
int actual_sqrt_recursion(int n, int i)
{
	int a,b;

	a = n;
	b = i;
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
