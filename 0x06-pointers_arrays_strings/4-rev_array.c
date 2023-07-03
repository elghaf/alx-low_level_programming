#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @arr: Array of integers.
 * @len: Number of elements in the array.
 *
 * Description: This function reverses an array of integers.
 **/
void reverse_array(int *arr, int len)
{
	int temp, i;

	for (i = 0; i < len; i++)
	{
		len--;
		temp = arr[i];
		arr[i] = arr[len];
		arr[len] = temp;
	}
}
