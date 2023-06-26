#include "main.h"

/**
 * Swap_int - swaps the values of 2 int.
 *
 * @first_int : firt integer.
 * @second_int : second integer.
 * Return : no return.
 *
 */

void swap_int(int *first_int, int *second_int)
{
	int swap = *first_int;
	*first_int = *second_int;
	*second_int = swap;
}
