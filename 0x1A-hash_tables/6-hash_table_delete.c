#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int loop_index;
    hash_node_t *tmp_node, *current_node;
    hash_table_t *head = ht;

    for (loop_index = 0; loop_index < ht->size; loop_index++)
    {
        if (ht->array[loop_index] != NULL)
        {
            current_node = ht->array[loop_index];
            while (current_node != NULL)
            {
                tmp_node = current_node->next;
                free(current_node->key);
                free(current_node->value);
                free(current_node);
                current_node = tmp_node;
            }
        }
    }
    free(head->array);
    free(head);
}
