#include <stdio.h>

/**
 * main - a program that print the number of input arguments
 * @c_argc : count Number of argument input
 * @v_argv : string of number argument input
 * Return : Succes
 * Description : program that print the number of arg string
 **/
int main(int c_argc, char *v_argv[]__attribute__((unused)))
{
	printf("%d", c_argc -1);
	printf("\n");
	return (0);
}

