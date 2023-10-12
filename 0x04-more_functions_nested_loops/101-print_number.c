#include "main.h"

/**
 * print_number - function that prints an integer.
 * @number: integer that will be printed
 */
void print_number(int number)
{
	unsigned int nul;

	if (number < 0)
	{
	nu1 = -number;
	_putchar('-');
	}
	else
	{
	nu1 = number;
	}

	if (nu1 / 10)
	{
	print_number(nu1 / 10);
	}

	_putchar((nu1 % 10) + '0');
}

