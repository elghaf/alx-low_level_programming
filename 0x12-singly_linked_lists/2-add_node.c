#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: str add in the node
 *
 * Return: the address of the new node, or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *node;
    size_t index = 0;

    node = malloc(sizeof(list_t *));
    /*condition if node is NULL*/
    if (node ==NULL)
    {
        /* code */
        return (NULL);
    }
    while (str[index])
    {
        /* code */
        index++;
    }
    /*add new node*/
    node->len = index;
    node->str = strdup(str);
    node->next = *head;
    *head = node;
    return (node);
}
