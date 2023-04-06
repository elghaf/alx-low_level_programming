#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0; /* Initialize a counter to 0 */
listint_t *create_node, *tms;

if (head == NULL)
return (NULL);

create_node = malloc(sizeof(listint_t));

if (create_node == NULL) /* If memory allocation fails, return NULL */
return (NULL);

create_node->n = n; /* Set the data of new node to n */
tms = *head; /* Set the temporary node to the head of the linked list */

if (idx == 0)
{
create_node->next = *head;
*head = create_node; /* Set the head pointer to the new node */
return (create_node);
}

while (i < idx - 1)
{
if (tms == NULL)
{
free(create_node); /* Free the memory for new node */
return (NULL);
}
tms = tms->next; /* Move to next node */
i++; /* Increment i */
}

create_node->next = tms->next; /* Set next pointer to the next node */
tms->next = create_node; /* Set the next pointer to the new node */

return (create_node);
}

