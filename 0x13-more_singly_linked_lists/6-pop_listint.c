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

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	chois = *head;
	*head = (*head)->next;
	node_pop = chois->n;
	free(chois);
	return (node_pop);
}
