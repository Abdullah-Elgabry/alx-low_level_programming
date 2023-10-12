#include "main.h"

/**
 * print_numbers -fun prints numbers from 0-9
 *
 * Return: 0 means success
*/

int print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
		putchar('\n');
		return (0);
}
