#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list free_list
 * @head: point the first node list
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
