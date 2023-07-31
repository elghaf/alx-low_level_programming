#include "lists.h"

/**
  * add_nodeint - Adding the node at the beginning
  * @head: The pointer to the starting node of a linked list
  * @n: The number or data in a linked list
  * Return: The pointer to a newly created node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node_int = NULL;

	add_node_int = malloc(sizeof(listint_t));
	if (add_node_int == NULL)
	{
		return (NULL);
	}
	else
	{
		add_node_int->n = n;
		add_node_int->next = *head;
		*head = add_node_int;
	}
	return (add_node_int);
}

