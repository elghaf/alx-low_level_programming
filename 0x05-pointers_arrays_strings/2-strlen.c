#include "main.h"
#include <string.h>
/**
 * _strlen - This program prints the length of a string
 *
 * @s: This is the string
 * Return: This is the length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		length++;
	}
	return (length);
}
