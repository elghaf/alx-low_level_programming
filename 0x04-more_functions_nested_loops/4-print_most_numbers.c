#include "main.h"

/**
 * print_numbers_excluding_2_and_4 - prints the numbers from 0 to 9 excluding 2 and 4
 */
void print_numbers_excluding_2_and_4(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i != 2 && i != 4)
        {
            _putchar(i + '0');
        }
    }

    _putchar('\n');
}

