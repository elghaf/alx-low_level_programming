#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *temps;

	while (head)
	{
		temps = head;
		head = head->next;
		free(temps->str);
		free(temps);
	}

	free(head);
}
