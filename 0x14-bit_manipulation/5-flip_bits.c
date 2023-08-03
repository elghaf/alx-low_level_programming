#include "main.h"

/**
 * flip_bits - counteur the number of bits to change
 * to get from one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;
	unsigned long int car;
	unsigned long int res = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		car = res >> i;
		if (car & 1)
			result++;
	}

	return (result);
}
