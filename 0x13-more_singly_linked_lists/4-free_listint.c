#include "lists.h"

/**
  * free_listint - Freeing the list
  * @head: The pointer to a first node
  * Return: nil
  */
void free_listint(listint_t *head)
{
	listint_t *chois;

	while (head != NULL)
	{
		chois = head;
		head = head->next;
		free(chois);
	}
}
