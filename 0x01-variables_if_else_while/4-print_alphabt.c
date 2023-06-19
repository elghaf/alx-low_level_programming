#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by a new line, excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char currentChar = 'a';

	while (currentChar <= 'z')
	{
		if (currentChar != 'e' && currentChar != 'q')
		{
			putchar(currentChar);
		}
		currentChar++;
	}

	putchar('\n');

	return (0);
}
