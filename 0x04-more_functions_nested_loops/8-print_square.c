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

	for (r = 1; col <= s; col++)
	{
		for (col = 1; col <= s; col++)

			_putchar('#');
		_putchar('\n');
	}
}
