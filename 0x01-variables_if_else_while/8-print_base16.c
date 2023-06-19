#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int asciiValue;

	for (asciiValue = 48; asciiValue <= 102; asciiValue++)
	{
		if (asciiValue == 102)
		{
			putchar(asciiValue);
			break;
		}
		else if ((asciiValue > 57 && asciiValue < 97) || asciiValue < 48)
		{
			continue;
		}
		else
		{
			putchar(asciiValue);
		}
	}
	putchar(10);
	return (0);
}
