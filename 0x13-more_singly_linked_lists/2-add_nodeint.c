#include "lists.h"

/**
  * add_nodeint - add nodeint at the beg
  * @head: pointer start node of a linked list
  * @n: data in a linked list
  * Return: The pointer to a newly created node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = n;
	listint_t *add_node = malloc(sizeof(listint_t));

	if (!add_node)
		return (NULL);

	add_node->n = i;
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
