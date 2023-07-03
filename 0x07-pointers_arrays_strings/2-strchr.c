#include "main.h"
/**
 * _strchr - Entry point
 * @str: input
 * @ch: input
 * Return: A pointer to the first occurrence of the character ch in the string str, or NULL if the character is not found.
 */
char *_strchr(char *str, char ch)
{
    int i = 0;

for (; str[i] >= '\0'; i++)
{
if (str[i] == ch)
return (&str[i]);
}
return (0);
}
