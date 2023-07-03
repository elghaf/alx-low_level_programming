/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: represents the pointer to the
 *    block of memory to fill
 * @b: input variable of char type
 *    represents the character to fill s
 *    
 * @n: unsigned int variable the number of bytes to be filled
 * Return: A pointer to the filled memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
