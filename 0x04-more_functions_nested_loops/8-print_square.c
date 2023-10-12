#include "main.h"

/**
 * print_square - this is a fun  print a square by #
 *
 * @s: size of square
 *
 * Return: 0 means (success)
*/

void print_square(int s)
{
	int r, col;

	if (size <= 0)
		_putchar('\n');

	for (r = 1; r <= s; r++)
	{
		for (col = 1; col <= s; col++)
			_putchar('#');
		_putchar('\n');
	}
}
