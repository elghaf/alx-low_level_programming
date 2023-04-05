#include <stdio.h>
#include "lists.h"

/**
  *listint_len - function that returns number of elemets in a linked list.
  *@h: pointer to the head of the list
  *Return: number of elements.
  */

size_t listint_len(const listint_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
