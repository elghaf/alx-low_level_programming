#include "lists.h"

/**
  * free_listint2 - Freeing the list and set head to NULL
  * @head: The pointer to a first node
  * Return: nil
  */
void free_listint2(listint_t **head)
{
	listint_t *chois;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		chois = *head;
		*head = (*head)->next;
		free(chois);
	}
	*head = NULL;
}
