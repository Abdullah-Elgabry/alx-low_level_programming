#include "main.h"

/**
 * print_numbers -fun prints numbers from 0-9
 *
 * Return: 0 means success
*/

int print_numbers(void)
{
	int i = 0;

	while (i >= 0 && i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
		_putchar('\n');
}
