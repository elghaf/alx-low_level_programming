#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer of allocated space mem.
 * @str: The string of char that has to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 * @date 2023-07-12
 * @copyright Copyright (c) 2023
 */
char *_strdup(char *str)
{
char *result;
int i, n = 0;

if (str == NULL)
return (NULL);
else
{
for (i = 0; str[i]; i++)
n++;
result = malloc(sizeof(char) * (n + 1));
if (result == NULL)
return (NULL);
else
{
for (i = 0; str[i]; i++)
result[i] = str[i];
result[n] = '\0';
return (result);
}
}
}
