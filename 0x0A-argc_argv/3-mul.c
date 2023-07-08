#include <stdio.h>
#include <stdlib.h>

/*
 * main - Prints the multiplication of two argument numbers
 * @c_argc: Argument count input
 * @v_argv: Argument vector array
 * Return: Success
 * Description: This program takes two numbers as command-line arguments and performs
 **/
int main(int c_argc, char *v_argv[])
{
int multi=1;

if(c_argc == 3)
{
multi = atoi(v_argv[c_argc -1]) * atoi(v_argv[c_argc-2]);
printf("%d", multi);
printf("\n");
}
else
{
printf("Error\n");
return(1);
}
return(0);
}