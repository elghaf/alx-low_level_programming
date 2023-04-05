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
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (!node_new){
		return (NULL);
	}
		

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
