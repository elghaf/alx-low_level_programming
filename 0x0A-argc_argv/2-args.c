#include <stdio.h>

/**
 * main - a program that prints the number
 * @c_argc: Number of Argument passed it
 * @v_argv: string of the argument
 * Description: This program takes two numbers as input
 * Return: success
 */
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