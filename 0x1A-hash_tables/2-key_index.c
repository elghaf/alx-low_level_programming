#include "hash_tables.h"
/**
 * key_index - gives index of key in arr of table
 * @key: the key
 * @size: Size of array
 * Author ayoub
 * Return: index at which key stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
