#include "main.h"

/**
 * print_most_numbers -fun prints numbers from 0-9 except 2 & 4
 *
 * Return: 0 means success
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
