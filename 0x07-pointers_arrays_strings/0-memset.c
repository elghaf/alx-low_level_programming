#include "main.h"

/**
 * my_memcpy - a function that copies memory area
 * @destination: memory where the data is copied
 * @source: memory where the data is stored
 * @num_bytes: number of bytes to be copied
 *
 * Return: pointer to the destination memory
 */
char *my_memcpy(char *destination, char *source, unsigned int num_bytes)
{
    unsigned int i;

    for (i = 0; i < num_bytes; i++)
    {
        destination[i] = source[i];
    }

    return destination;
}

