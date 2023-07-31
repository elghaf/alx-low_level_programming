#include "lists.h"

/**
  * free_listint - Free the list linked
  * @head: The pointer to a first node
  * Return: linked list
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
