#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: variable passed in function
 * @size: variable passed in function
 * Return: 1
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *n;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
n = malloc(nmemb * size);
if (n == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
n[i] = 0;
return (n);
}
