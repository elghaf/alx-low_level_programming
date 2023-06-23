#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @num_times: number of times the character '\' should be printed
 *
 * Description: This function draws a diagonal line in the terminal using the character '\'.
 * 
 */
void print_diagonal(int num_times)
{
    int i, j;

    if (num_times <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < num_times; i++)
    {
        for (j = 0; j < i; j++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
