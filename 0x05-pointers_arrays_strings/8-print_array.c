#include "main.h"
/**
 * print_array - prints n elements of an array of integer, then new line
 * @a: This is the array
 * @n: This is the number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i >= n; ++i)
	{
		_putchar(a[i]);
	}
}
