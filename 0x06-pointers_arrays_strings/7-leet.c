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
char letters[] = "aAeEoOtTlL";
char numbers[] = "43071";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; letters[j] != '\0'; j++)
	{
		if (str[i] == letters[j])
		{
			str[i] = numbers[j];
			break;
		}
	}
}
return str;
}
