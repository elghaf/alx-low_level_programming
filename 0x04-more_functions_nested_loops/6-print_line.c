#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @num_times: number of times the character '_' should be printed
 *
 * Description: This function prints a straight line consisting of the character '_'
 * 
 */
void print_line(int num_times)
{
    int i;

    if (num_times <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < num_times; i++)
    {
        _putchar('_');
    }

    _putchar('\n');
}
