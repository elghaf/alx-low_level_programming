#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head element in the list
 * @n: number add to the insert in element
 *
 * Return: address of the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
// declaration of the variable that pointers to listnint_t

	listint_t *new;
	listint_t *temp = *head;
// the same thing allocate memory for node created

	new = malloc(sizeof(listint_t));

// if malloc fails return null and break the function
	if (new == NULL)
		return (NULL);

// Initialize the element of the node created

	new->n = n;
	new->next = NULL;
// if list not exist or NULL, update the head ponter

	if (*head == NULL)
	{
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
