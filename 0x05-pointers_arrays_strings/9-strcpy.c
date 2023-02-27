#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src,+(\0), to the buffer Dest
 * @src: This is the variable needed
 * @dest: This is the memory location needed
 * Return: The value and memory location is new
 */
char *_strcpy(char *dest, char *src)
{
	char *c;

	c = dest;

	for (; *scr != '\0', src++)
	{
		*dest = *scr;
		dest++;
	}

	*dest = '\0';
	return (c);
}
