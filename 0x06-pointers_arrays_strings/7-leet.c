#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: input string to encode
 *
 * Description: Encodes a string by replacing certain letters with numbers.
 * Only the characters 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', and 'L'
 * are replaced with '4', '3', '0', '7', '1' respectively.
 *
 * Return: Pointer to the encoded string.
 */

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
