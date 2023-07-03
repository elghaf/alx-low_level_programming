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
	int j=0;

	for ( ; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
