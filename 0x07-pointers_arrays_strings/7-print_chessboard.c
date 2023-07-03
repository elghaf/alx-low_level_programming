#include "main.h"

/**
 * print_chessboard - Entry point
 * @board: array
 * Return: void
 */
void print_chessboard(char (*board)[8])
{
    int i;
    int j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            _putchar(board[i][j]);
        _putchar('\n');
    }
}
