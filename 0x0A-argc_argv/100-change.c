#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money
 * @c_argc: Number of arguments passed
 * @v_argv: Array of argument strings
 * Return: 0 on success, 1 on error
 */
int main(int c_argc, char *v_argv[])
{
	int cent, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int num_denominations = sizeof(denominations) / sizeof(denominations[0]);
	int i;

	if (c_argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(v_argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_denominations; i++)
	{
		coins += cent / denominations[i];
		cent %= denominations[i];
	}

	printf("%d\n", coins);

	return (0);
}
