#include "function_pointers.h"
/**
 * int_index - returning index place
 * @array: array of elem
 * @size: size of elem in arr
 * @cmp: pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);
while(i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
return (-1);
}
