#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Description: This function capitalizes the first letter of each word in the
 *              given string.
 * Return: The capitalized string.
 **/
char *cap_string(char *str)
{
int i = 0;
if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
while (str[i])
{
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) ||
	    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
	    str[i] == '}')
	{
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	else
	{
		i++;
	}
}
return (str);
}
