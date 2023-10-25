#include "main.h"

/**
 * _puts_recursion - this is  fun that prints a str followed by a new line
 *
 * @s: ptr to check reach to top
 *
 * Return: this is void fun
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
