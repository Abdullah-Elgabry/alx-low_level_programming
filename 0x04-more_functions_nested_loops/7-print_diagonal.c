#include "main.h"

/**
 * print_diagonal - fun that draws a diagonal line on the terminal.
 *
 * @n: number of \ that will print
*/

void print_diagonal(int n)
{
	int di, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (di = 1; di <= n; di++)
		{
			for (space = 1; space <= di; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
