#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two args numbers
 * @c_argc: argument count
 * @v_argv: argument vector
 * Return: 0
 * Description: This program takes two numbers
 */
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