#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @str: A pointer to character.
 * @ch: A character with constant byte.
 * @count: An integer as the number of characters to be filled.
 *
 * Return: A pointer to the memory area str.
 */
char *_memset(char *str, char ch, int count)
{
int i;

for (i = 0; count > 0; i++)
{
    str[i] = ch;
    count--;
}
return (str);
}
