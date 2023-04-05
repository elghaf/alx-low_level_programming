#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t res = 0;
	const listint_t *hito = h;

	while (hito != 0)
	{
		printf("%d\n", h->n);
		res++;
		hito = hito->next;
	}

	return (res);
}
