#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: pointer to hash table
 * print the key/value
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *current_node;
    unsigned long int loop_index; 
    unsigned char comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (loop_index = 0; loop_index < ht->size; loop_index++)
    {
        if (ht->array[loop_index] != NULL)
        {
            if (comma_flag == 1)
                printf(", ");

            current_node = ht->array[loop_index];
            while (current_node != NULL)
            {
                printf("'%s': '%s'", current_node->key, current_node->value);
                current_node = current_node->next;
                if (current_node != NULL)
                    printf(", ");
            }
            comma_flag = 1;
        }
    }
    printf("}\n");
}
