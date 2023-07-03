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

char *leet(char *str)
{
char *leetLetters = "AEOTL";
char *leetNumbers = "43071";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; leetLetters[j] != '\0'; j++)
	{
		if (str[i] == leetLetters[j] || str[i] == leetLetters[j] + 32)
		{
			str[i] = leetNumbers[j];
			break;
		}
	}
}
return (str);
}
