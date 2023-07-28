#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a news node
 * 
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node, *last_node;
    int index = 0;

    node = malloc(sizeof(list_t));
    if (node == NULL)
    {
        return (NULL);
    }
    while (str[index])
    {
        /* code */
        index++;
    }
    /*add node to the last not beginin*/
    node->len = index;
    node->str = strdup(str);
    if(*head == )
    
}