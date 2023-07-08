#include <stdio.h>

/*
 * main - The program that multiplies two numbers.
 * @argc: The count of input numbers.
 * @argv: The array of input numbers.
 * Return: Success.
 * Description: This program takes two numbers as input,
 * and performs multiplication.
 **/
int main (int c_argc, char *v_argv[])
{
	int i=0;

	for(i =0;i<c_argc; i++)
	{
		printf("%s", v_argv[i]);
		printf("\n");
	}
	return (0);
}
