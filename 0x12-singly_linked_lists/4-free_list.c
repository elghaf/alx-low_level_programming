#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees memory of list_t SLL
 * @head: ptr to 1st node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *result;

	result = head;
	while (result != NULL)
	{
		free(result->str);
		free(result);
		result = result->next;
	}
}
