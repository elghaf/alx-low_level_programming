#include <stdio.h>
#include "lists.h"
#include <stddef.h>


/*
 * print_list - prints all the elements of a list_t.
 * @h: list to print
 * return: the number of nodes.
 * 
 */

size_t print_list(const list_t *h)
{
    const list_t *result = h;
    size_t index = 0;

    while(result != NULL)
    {
        if(result->str != NULL)
        printf("[%d] %s\n", result->len, result->str);
        else
        {
            print("[0] (nil)");
        }
        printf("\n");
        index++;
        result = result->next;
    }
    return (index);
}
