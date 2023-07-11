#include "main.h"
#include <stdlib.h>

/*
 * create_arrat - Create array of char.
 * @size: The size of the array.
 * @c : the char to init the array with.
 * Return: If size == 0 or a pointer of the array.
 * Description: this function dynamically allocates memory
 * 				for an array of characters.
 **/
char *create_array(unsigned int size, char c)
{
char *result;
unsigned int i;

if (size == 0)
{
	return (NULL);
}
else
{
result = malloc(sizeof(char) * size);
if (result == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
result[i] = c;
}
return (result);
}
}
}
