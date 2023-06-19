#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercaseLetter;

	for (lowercaseLetter = 97; lowercaseLetter <= 122; lowercaseLetter++)
	{
		putchar(lowercaseLetter);
	}

	putchar(10);
	return (0);
}
