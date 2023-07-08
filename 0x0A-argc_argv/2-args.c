#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @c_argc: Number of arguments passed
 * @v_argv: Array of argument strings
 * Description: This program prints the number of arguments passed into it. It serves as
 * Return: Success
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
