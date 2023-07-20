#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two har of strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *                   containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}
