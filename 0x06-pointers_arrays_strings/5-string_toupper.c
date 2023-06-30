#include "main.h"

/**
 * *string_toupper - Changes all lowercase characters to uppercase.
 * @str: The string.
 *
 * Description: This function changes all lowercase characters in the string
 *              to uppercase.
 * Return: The uppercase string.
 **/
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
}
return (str);
}
