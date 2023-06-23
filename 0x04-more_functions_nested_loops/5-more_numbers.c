#include "main.h"

/**
 * print_numbers_repeatedly - prints the numbers from 0 to 14, repeated 10 times
 */
void print_numbers_repeatedly(void)
{
    int i, j;

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}
