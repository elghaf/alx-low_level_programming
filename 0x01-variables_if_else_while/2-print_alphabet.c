#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_letter;

	for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
	{
		putchar(lowercase_letter);
	}

	putchar('\n');
	return 0;
}
