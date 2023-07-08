#include <stdio.h>

/**
 * main - A program that prints the number of input arguments
 * @c_argc: Count of the number of arguments input
 * @v_argv: Array of argument strings
 * Description: This program prints 
 * the number of input arguments provided.
 * Return: Success
 **/
int main(int c_argc, char *v_argv[]__attribute__((unused)))
{
printf("%d", c_argc - 1);
printf("\n");
return (0);
}