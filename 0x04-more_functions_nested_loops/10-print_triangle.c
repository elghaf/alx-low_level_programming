#include <stdio.h>

/**
 * print_triangle - Prints a triangle pattern using '#'.
 * @size: The size of the triangle.
 *
 * Description: Prints a triangle pattern of the specified size using the '#' character.
 * 
 */
void print_triangle(int size)
{
    int i, j;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
