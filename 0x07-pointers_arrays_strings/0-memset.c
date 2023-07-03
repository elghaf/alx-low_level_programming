#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: address of memory to be filled.
 * @b: the desired values.
 * @n: number to be changed.
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
    char result;

	for ( i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
    result = s;
	return (result);
}
