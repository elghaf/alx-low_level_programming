#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @arr: array
 * @length: number of elements
 */
void print_array(int *arr, int length)
{
int i = 0;
if (length <= 0)
    return;
printf("%d", arr[0]);
for (i = 1; i < length; i++)
{
    printf(", %d", arr[i]);
}
printf("\n");
}
