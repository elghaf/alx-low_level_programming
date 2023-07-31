#include "lists.h"

/**
  * listint_len - Return length of list printed
  * @h: The head pointer first of the list
  * Return: The number of nodes in a singly linked list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *node_len = h;
	size_t times = 0;

	while (node_len)
	{
		times++;
		node_len = node_len->next;
	}
	return (times);
}
