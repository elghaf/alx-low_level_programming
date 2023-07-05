#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array of the board
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int count_row;
	int count_column;

	for (count_row = 0; count_row < 8; count_row++)
	{
		for (count_column = 0; count_column < 8; count_column++)
			_putchar(a[count_row][count_column]);
		_putchar('\n');
	}
}
