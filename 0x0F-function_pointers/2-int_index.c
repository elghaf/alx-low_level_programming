#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index: function to search for int
 * @array: the array of elem
 * @size: size of arr
 * @cmp: pointer to the function to compare int
 * Return: Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
unsigned int i;

if(cmp == NULL || size <= 0 || array == NULL)
return (-1);
while (i < size)
{
/* code */
if(cmp(array[i]))
return (i);
}
return (-1);
}
