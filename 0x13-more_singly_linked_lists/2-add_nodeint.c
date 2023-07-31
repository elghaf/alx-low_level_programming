#include "lists.h"

/**
  * add_nodeint - Adding the node at the beginning
  * @head: The pointer to the starting node of a linked list
  * @n: The number or data in a linked list
  * Return: The pointer to a newly created node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = n;
	listint_t *add_node = malloc(sizeof(listint_t));

	if (!add_node)
		return (NULL);

	add_node->next = *head;
	add_node->n = i;
	*head = add_node;

	return (add_node);
}
