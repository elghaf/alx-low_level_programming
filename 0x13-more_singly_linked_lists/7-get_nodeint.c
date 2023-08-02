#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: source code
 * @index: number to be printed
 *
 * Return: ....
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_pop = 0;
    listint_t *chois = head;


	while (chois != NULL)
	{
		if (node_pop == index)
			return (chois);

		chois = chois->next;
		node_pop++;
	}

	return (NULL);
}
