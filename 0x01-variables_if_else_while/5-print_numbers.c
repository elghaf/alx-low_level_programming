#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
