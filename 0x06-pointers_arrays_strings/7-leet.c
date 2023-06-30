#include "main.h"

/**
 * *leet - encodes a string to 1337
 * Description: changes some letters to numbers
 * Return: edited string
 * @s: input string
 **/

char *leet(char *s)
{
char *letters = "AEOTL";
char *numbers = "43071";
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; letters[j] != '\0'; j++)
	{
		if (s[i] == letters[j] || s[i] == letters[j] + 32)
		{
			s[i] = numbers[j];
			break;
		}
	}
}
return s;
}
