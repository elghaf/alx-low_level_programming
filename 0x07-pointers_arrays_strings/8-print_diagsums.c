#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input of data
 * @size: input data
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int first_sum, second_sum, counts;

	first_sum = 0;
	second_sum = 0;

	for (counts = 0; counts < size; counts++)
	{
		first_sum = first_sum + a[counts * size + counts];
	}

	for (counts = size - 1; counts >= 0; counts--)
	{
		second_sum += a[counts * size + (size - counts - 1)];
	}

	printf("%d, %d\n", first_sum, second_sum);
}
