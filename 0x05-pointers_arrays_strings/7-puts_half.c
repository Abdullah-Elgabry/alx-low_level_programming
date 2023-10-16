#include "main.h"

/**
 * puts_half - prints a string, in reverse, followed by a new line.
 *
 * @s: this is the ptr to str will be printed
 *
 * Return: Always 0
*/

void puts_half(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	c++;
	for (c /= 2; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
