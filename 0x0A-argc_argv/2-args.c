#include <stdio.h>

/*
 * main - the program that mutiplies two numbers
 * @c_argc : the count of input number
 * @v_argv : the array of the input number
 * Return : Success
 * Description : program that take the arg and do 
 * multulication
 **/
int main (int c_argc, char *v_argv[])
{
	int i=0;

	for(i =0;i<c_argc; i++)
	{
		printf("%s", v_argv[i]);
	}
	return (0);
}
