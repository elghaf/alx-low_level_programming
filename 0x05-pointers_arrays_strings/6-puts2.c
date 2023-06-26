#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int length = 0;
	char *ptr = str;
	int index;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}

	for (index = 0; index < length; index++)
	{
		if (index % 2 == 0)
		{
			putchar(str[index]);
		}
	}

	putchar('\n');
}
