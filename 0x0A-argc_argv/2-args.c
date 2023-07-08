#include <stdio.h>

/*
 * main - The program that multiplies two numbers
 * @c_argc: The count of input numbers
 * @v_argv: The array of input numbers
 * Description: This program takes two numbers as input
 * and performs multiplication
 * Return: success
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
