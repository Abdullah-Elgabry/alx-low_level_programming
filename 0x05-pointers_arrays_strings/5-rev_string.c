#include "main.h"

/**
 * rev_string- prints a string, in reverse
 *
 * @rev: this is the ptr to str will be printed
 *
 * Return: Nothing
*/

void rev_string(char *rev)
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
