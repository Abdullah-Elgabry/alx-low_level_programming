#include "main.h"

/**
 * print_rev  - prints a string, in reverse, followed by a new line.
 *
 * @rev: this is the ptr to str will be printed
 *
 * Return: void
*/

void print_rev(char *rev)
{
	int c = 0;
	int r;
	char tmp;

	while (rev[c])
		c++;
	for (r = 0; r < c / 2; r++)
	{
		tmp = rev[r];
		rev[r] = rev[c - 1 - r];
		rev[c - 1 - r] = tmp;
	}
}
