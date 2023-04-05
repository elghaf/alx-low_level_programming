#include <stdio.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t  res = 0;

	while (h != NULL)
	{
		res++;

		h = h->next;
	}

	return (res);
}
