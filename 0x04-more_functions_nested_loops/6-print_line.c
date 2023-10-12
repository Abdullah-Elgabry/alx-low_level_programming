#include "main.h"

/**
 * print_line - fun that draws a straight line in the terminal.
 *
 * @l: number of _ that will print
*/

void print_line(int l)
{
	int num_of_;

	if (l <= 0)
		_putchar('\n');
	else
	{
		for (num_of_ = 1; num_of_ <= l; num_of_++)
			_putchar(95);
		_putchar('\n');
	}
}
