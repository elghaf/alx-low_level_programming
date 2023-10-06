#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: the hash table
 * @key: the key
 * Return: value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *current_node;
    unsigned long int hash_index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    hash_index = key_index((const unsigned char *)key, ht->size);
    if (hash_index >= ht->size)
        return (NULL);

    current_node = ht->array[hash_index];
    while (current_node && strcmp(current_node->key, key) != 0)
        current_node = current_node->next;

    return ((current_node == NULL) ? NULL : current_node->value);
}
