#include <stdio.h>
#include "lists.h"
/**
 * list_len - size_t the number of elements in a linked list
 * @h: pointer to the list_t.
 *
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{
    const list_t *result = h;
    unsigned int index = 0;

    while (result != NULL)
    {
        /* code */
        index++;
        result = result->next;
    }
    return (index);   
}
