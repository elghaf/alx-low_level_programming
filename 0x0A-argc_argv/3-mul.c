#include <stdio.h>
#include <stdlib.h>

/*
 * main - Prints the multiplication of two argument numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 * Description: This program takes two
 *  numbers as command-line arguments and performs
 **/
int main(int c_argc, char *v_argv[])
{
int multi=1;

if(c_argc == 3)
{
multi = atoi(v_argv[c_argc -1]) * atoi(v_argv[c_argc-2]);
printf("%d", multi);
printf("\n");
return(0);
}
else
{
printf("error\n");
return (1);
}
}
