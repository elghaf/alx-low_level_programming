#include <stdio.h>
#include "lists.h"


/**
 *  returns number of elements in a linked list
 * @h: linked lists of types listint_t to traverses
 *
 * Return: number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t  res = 0;

	while (h != 0)
	{
		res++;

		h = h->next;
	}

	return (res);
}
