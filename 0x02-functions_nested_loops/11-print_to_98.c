#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @start: Prints from this number.
 */
void print_to_98(int start)
{
	int i;

	if (start <= 98)
	{
		for (i = start; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (i = start; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
