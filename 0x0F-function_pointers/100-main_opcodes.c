#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints or display opcodes.
 * @argc: number of arg pass in func.
 * @argv: array of arg pass in func.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int num_bytes, i = 0;
char *arr;

num_bytes = atoi(argv[1]);
if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
if (num_bytes < 0)
{
	printf("Error\n");
	exit(2);
}
array_arg = (char *)main;
while (i < num_bytes)
{
/* code */
if (i == num_bytes - 1)
{
printf("%02hhx\n", array_arg[i]);
break;
}
printf("%02hhx ", array_arg[i]);
i++;
}
return (0);
}
