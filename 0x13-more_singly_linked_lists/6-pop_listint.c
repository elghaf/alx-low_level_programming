#include "lists.h"

/**
  * pop_listint - The function to delete head node
  * @head: The pointer to the head node
  * Return: The value in deleted head node
  */
int pop_listint(listint_t **head)
{
	listint_t *chois;
	int node_pop;

	if (*head == NULL || !head)
		return (0);

	node_pop = (*head)->n;
	chois = (*head)->next;
	free(*head);
	*head = chois
	return (node_pop);
}
