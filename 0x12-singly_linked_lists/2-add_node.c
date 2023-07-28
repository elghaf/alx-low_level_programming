#include "lists.h"
#include <string.h>

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
