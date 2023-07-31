#include "lists.h"

/**
  * add_nodeint_end - Adding the node at the end
  * @head: The pointer to the starting node of a linked list
  * @n: The number or data in a linked list
  * Return: The pointer to a newly created node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new_node_end = NULL;
	listint_t *chois;

	add_new_node_end = malloc(sizeof(listint_t));

	if (add_new_node_end == NULL)
	{
		return (NULL);
	}

	add_new_node_end->n = n;
	add_new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_new_node_end;
	}
	else
	{
		chois = *head;

		while (chois->next != NULL)
		{
			chois = chois->next;
		}
		chois->next = add_new_node_end;
	}
	return (add_new_node_end);
}
