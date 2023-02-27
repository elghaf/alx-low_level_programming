#include "main.h"
#include <unistd.h>
/**
 * _putchar - Write the character c to stdio
 * @c: This is the character to print
 *
 * Return: 1 on success, -1 if its not set aprropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
