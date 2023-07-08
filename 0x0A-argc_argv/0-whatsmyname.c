#include <stdio.h>
#include "main.h"

/*
 * main - print the name argv \n
 * @c_argc : the argument of len of the array
 * @v_argv : the argument of array 
 * Return : succ
 * */
int main(int c_argc __attribute__((unused)), char *v_argv[])
{
printf("%s\n", v_argv[0]);
return (0);
}
