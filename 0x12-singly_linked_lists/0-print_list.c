#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/*
 * print_list - prints all the elements of a list_t.
 * @h: pointer list to print.
 * 
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
    const list_t *result = h;
    size_t index = 0;

    while(result != NULL)
    {
        index++;
        if(result->str != NULL)
        printf("[%d] %s\n", result->len, result->str);
        else
        {
            printf("[0] (nil)");
            printf("\n");
        }
        result = result->next;
    }
    return (index);
}
