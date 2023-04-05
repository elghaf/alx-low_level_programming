#include "lists.h"

/**
 * free_listint - frees a linked lists.
 * @head: pointer list
 * Return: Void
 */
void free_listint(listint_t *head)
{
// declaration of timeponter
	listint_t *tms;

	while (head)
	{
		// current store node create in tms
		tms = head;
		//update the header
		head = head -> next;
		free(tms);
	}
}
