#include "main.h"

/**
 * print_triangle - fun that draws a triangle
 *
 * @s: size/shape of triangle
 * return: 0 means (Success)
*/

void print_triangle(int s)
{
	int col, row;

	if (s <= 0)
		_putchar('\n');
	else
	{
		for (col = 1; col <= s; col++)
		{
			for (row = 1; row <= s; row++)
			{
				if ((col + row) <= s)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
}
