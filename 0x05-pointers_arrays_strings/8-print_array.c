#include "main.h"

/**
 * print_array - print elements of an array
 * @arr: array
 * @length: number of elements
 */
void print_array(int *arr, int length)
{
int i;
for (i = 0; i < length ; i++)
{
if (i != length - 1)
    printf("%d, ", arr[i]);
else
    printf("%d", arr[i]);
}
printf("\n");
}
