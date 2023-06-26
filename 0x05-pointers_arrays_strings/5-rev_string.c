#include "main.h"

/**
 * rev_string - reverses a string
 * @str: the string to reverse
 */
void rev_string(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
	{
		len++;
	}

for (i = 0; i < len / 2; i++)
	{
	    char temp = str[i];
	    str[i] = str[len - i - 1];
	    str[len - i - 1] = temp;
	}
}
