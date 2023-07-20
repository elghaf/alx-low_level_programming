#include "function_pointers.h"
#include <stdio>
/**
 * array_iterator - print array elements
 * @array: array of elem
 * @size: the size of arr
 * @action: function pointer
 * Return: void none
 * 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if(action == NULL || array == NULL)
return ;
while (i < size)
{
/* code */
action(array[i]);
i++;
}
}
