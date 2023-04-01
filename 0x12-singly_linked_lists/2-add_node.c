#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temps;

	if (head != NULL && str != NULL)
	{
		temps = malloc(sizeof(list_t));
		if (temps == NULL)
			return (NULL);

		temps->str = strdup(str);
		temps->len = _strlen(str);
		temps->next = *head;

		*head = temps;

		return (temps);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int c_str = 0;

	while (*s)
	{
		s++;
		c_str++;
	}

	return (c_str);
}
