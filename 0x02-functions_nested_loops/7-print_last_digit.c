#include "main.h"

/**
 * print_last_digit -  this funprint the last diget of any num
 *
 * @ch: input of fun
 *
 * Return: lst
*/

int print_last_digit(int ch)
{
	int lst;

	if (n < 0)
		lst = -1 * (n % 10);
	else
		lst = n % 10;

	_putchar(lst + '0');
	return (lst);
}
