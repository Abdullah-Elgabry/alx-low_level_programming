#include "main.h"

/**
 * print_diagonal - fun that draws a diagonal line on the terminal.
 *
 * @l: number of / that will print
*/

void print_diagonal(int l)
{
	int dir, space;

	if (l <= 0)
		_putchar('\n');
	else
	{
		for (dir = 1; dir <= l; dir++)
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
