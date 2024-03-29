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

    chois = h;
    while (chois != NULL)
    {
        /* code */
        printf("%d\n", chois->n);
        i++;
        chois = chois->next;
    }
    return (i);
}
