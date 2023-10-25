#include "main.h"

/**
 * _print_rev_recursion - this is a fun that  prints a string in reverse
 *
 * @s: this is a ptr to the str
 *
 * Return: this is void fun
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
