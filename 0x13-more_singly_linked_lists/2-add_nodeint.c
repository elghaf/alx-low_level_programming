#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
// to allocate memory for the new node created

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

// set the value of n in the new node created
// to understand the concepte read about array links
	new->n = n;
	new->next = *head;
// update head pointer to the point of node created
	*head = new;
// finaly return the value pointer in the new nodes
	return (new);
}
