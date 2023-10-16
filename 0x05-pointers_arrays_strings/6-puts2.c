#include "main.h"

/**
 * puts2 - prints str + /n
 *
 * @s: this is the ptr to str will be printed
 *
 * Return: Nothing
*/

void puts2(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; ++n)
	{
		if (n % 2 == 0)
			_putchar(s[n]);
	}
	_putchar('\n');
}
