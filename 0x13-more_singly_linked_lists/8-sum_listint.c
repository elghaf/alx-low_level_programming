#include "lists.h"

/**
 * sum_listint - calculates the sumation of all the data
 * @head: first node in the linked list
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int add_int = 0;
	listint_t *chois = head;

	while (chois)
	{
		add_int += chois->n;
		chois = chois->next;
	}

	return (add_int);
}
