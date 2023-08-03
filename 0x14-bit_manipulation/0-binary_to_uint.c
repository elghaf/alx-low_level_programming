#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number > int
 * @b: string containing num binary
 *
 * Return: unsigned count
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int count = 0;
    if (b == NULL)
    return (0);
    for (i = 0; i < b[i]; i++)
    {
        /* code */
        if (b[i] < '0' || b[i] > '1')
        {
            /* code */
            return (0);
        }
        count = count + count + (b[i] - '0');
        
    }
    return (count);
}
