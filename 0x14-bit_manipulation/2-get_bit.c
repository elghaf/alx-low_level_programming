#include "main.h"

/**
 * set_bit - sets a bit of index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 none
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valeur;

	if (index >= 64)
		return (-1);

	valeur = (n >> index) & 1;

	return (valeur);
}
