#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - funtion that adds a new node at the beginning of a list.
  * Return: Address of the new element or NULL if fail.
  * @head: head of a list
  * @n: n element.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
