#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @pointer_character: A pointer of the character.
 * @character_cte: A character with byte cte.
 * @n: an integer.
 *
 * Return: A pointer to the memory area pointer_character.
 */
char *_memset(char *pointer_character, char character_cte, unsigned int n)
{
int i;

for (i = 0; n > 0; i++)
{
pointer_character[i] = character_cte;
n--;
}

return (pointer_character);
}