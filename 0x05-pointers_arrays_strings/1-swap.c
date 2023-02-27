#include "main.h"
/**
 * swap_int - This program takes in two integers swaps their values
 * @a: This is the first integer
 * @b: This is the second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
