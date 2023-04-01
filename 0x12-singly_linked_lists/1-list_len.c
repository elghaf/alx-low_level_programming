#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		h = h->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
