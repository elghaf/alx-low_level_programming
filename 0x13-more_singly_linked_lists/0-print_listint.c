#include "lists.h"

/**
 * print_listint - Print the list of input
 * @h: the pointer of list
 * 
 * Return: The number of terms linked list.
 * 
 */
size_t print_listint(const listint_t *h)
{
    int i = 0;
    listint_t const *chois;

    while (h != NULL)
    {
        /* code */
        i++;
        printf("%d\n", chois->n);
        chois = chois->next;
    }
    return (i);
}
