#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int count;

		while (*s)
		{
			for (count = 0; accept[count]; count++)
			{
			if (*s == accept[count])
			return (s);
			}
		s++;
		}

	return ('\0');
}
