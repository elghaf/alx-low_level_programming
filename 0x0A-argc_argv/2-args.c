#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @c_argc: Number of Argument passed
 * @v_argv: string of argument
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
