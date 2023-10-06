#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: Size of the array
 * Author ayoub
 * Return: Pointer to newly created has table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashx = NULL;

	if (size == 0)
		return (NULL);

	hashx = malloc(sizeof(hash_table_t));

	if (!hashx)
	{
		return (NULL);
	}
	hashx->size = size;
	hashx->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (hashx->array == NULL)
	{
		return (NULL);
	}
	return (hashx);
}
