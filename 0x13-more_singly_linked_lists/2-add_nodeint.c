#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - funtion that adds a new nodes at the beginnings of a lists.
  * Return: Address of the news elements or NULL if fails.
  * @head: head of a list
  * @n: n element.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *res;

	res = malloc(sizeof(listint_t));

	if (res == NULL){
		return (NULL);
	}

	res->n = n;
	res->next = *head;
	*head = res;

	return (*head);
}
