#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * Return: head to nULL;
 */
void free_listint2(listint_t **head)
{
	listint_t *tms;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tms = (*head)->next;
		free(*head);
		*head = tms;
	}
	// head to nULL
	*head = NULL;
}
