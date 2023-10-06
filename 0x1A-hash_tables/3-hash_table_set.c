#include "hash_tables.h"

/**
 * hash_table_set - adds a key in the table
 * @ht: the hash table
 * @key: the key
 * @value: value associated with key
 * 
 * Return: 1 if succeeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *new_value_copy;
    unsigned long int hash_index;
    unsigned long int loop_index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    new_value_copy = strdup(value);
    if (new_value_copy == NULL)
        return (0);

    hash_index = key_index((const unsigned char *)key, ht->size);
    for (loop_index = hash_index; ht->array[loop_index]; loop_index++)
    {
        if (strcmp(ht->array[loop_index]->key, key) == 0)
        {
            free(ht->array[loop_index]->value);
            ht->array[loop_index]->value = new_value_copy;
            return (1);
        }
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(new_value_copy);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = new_value_copy;
    new_node->next = ht->array[hash_index];
    ht->array[hash_index] = new_node;

    return (1);
}
