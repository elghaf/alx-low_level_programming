#include "lists.h"

/**
 * add_nodeint - create node at the beginning of a linked lists.
 * @head: element pointer node in the lists
 * @n: input to insert in that new nodes.
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
