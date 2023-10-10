#include "main.h"

/**
 * print_sign -  show sign + if ch > 0 and 0 if zero and - if less than 0
 *
 * @ch: input of fun
 *
 * Return: On success 1 if +, zero if zero and print -1 if sinf -
*/

int print_sign(int ch)
{
	if (ch > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (1);
	}
}
