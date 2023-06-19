#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
    char lowercaseLetter = 'a';
    char uppercaseLetter = 'A';

    while (lowercaseLetter <= 'z')
    {
        putchar(lowercaseLetter);
        lowercaseLetter++;
    }

    while (uppercaseLetter <= 'Z')
    {
        putchar(uppercaseLetter);
        uppercaseLetter++;
    }

    putchar('\n');

    return 0;
}
