#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Description: reverses an array of integers
 * @arr: array of integers
 * @len: number of elements in array
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
