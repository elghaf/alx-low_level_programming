#include <stdio.h>
#include "stdio.h"

/**
 * main - A program that prints its name, followed by a new line
 * @c_argc: Argument count
 * @v_argv: Array of arguments
 * Return: Success
 * Description: This program prints its name, followed by a new line.
 * It serves as an
 **/
int main(int c_argc __attribute__((unused)), char *v_argv[])
{
printf("%s\n", v_argv[0]);
return (0);
}
