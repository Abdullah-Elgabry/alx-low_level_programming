#include "main.h"

/**
 * print_chessboard - this is a fun that prints the chessboard.
 *
 * @a: the char will be added in row
 *
 * Return: this is void fun
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
