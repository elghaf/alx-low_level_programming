#include "lists.h"

/**
 *get_nodeint_at_index - Get the node at the desired location
 *@head: The pointer to the first node
 *@index: position of the desired node
 *
 *Return: the data of the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int node_pop = 0;
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
