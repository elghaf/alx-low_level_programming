#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at end of (list_t)SLL
 * @head: double pointer head.
 * @str: input str to add.
 *
 * Return: new node address.
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
    if(*head == NULL)
    {
        node->next = *head;
        *head = node;
    }
    else
    {
        node->next = NULL;
        last_node = *head;
        while (last_node->next)
        {
            /* code */
            last_node = last_node->next;
        }
        last_node->next = node;
    }
    return (node);    
}
