#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * 
 * Return: void.
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
