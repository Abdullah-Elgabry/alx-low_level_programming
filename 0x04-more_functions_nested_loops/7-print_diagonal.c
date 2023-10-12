#include "main.h"

/**
 * print_diagonal - fun that draws a diagonal line on the terminal.
 *
 * @n: number of \ that will print
*/

void print_diagonal(int n)
{
	int dir, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dir = 1; dir <= n; dir++)
		{
			for (space = 1; space <= dir; space++)
			{
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
			}
		}
	}
}
