#include "main.h"
#include <stdlib.h>

<<<<<<< HEAD
/*
 * create_arrat - Create array of char.
 * @size: The size of the array.
 * @c : the char to init the array with.
 * Return: If size == 0 or a pointer of the array.
 * */
=======
/**
 * create_array - Creates an array chars and
 *                init it with a specific char.
 * @size: size of the array.
 * @c: specific char to int.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
>>>>>>> c18c1de30b33f27211039dd9a02670322ff33ecb
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
