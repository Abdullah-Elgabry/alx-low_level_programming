#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: input str 
 *
 * Return: (0)
*/

void print_number(int n)
{
	unsigned int un_n;

	un_n = n;

	if (n < 0)
	{
		_putchar('-');
		un_n = -n;
	}

	if (un_n / 10 != 0)
	{
		print_number(un_n / 10);
	}
	_putchar((un_n % 10) + '0');
}
