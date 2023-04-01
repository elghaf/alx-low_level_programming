#include "lists.h"
#include <stdio.h>

/**
 * Prints all the elements of a list_t list.
 *
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
