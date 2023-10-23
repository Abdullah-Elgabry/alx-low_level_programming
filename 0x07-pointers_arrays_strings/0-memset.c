#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: this is ptr to the source
 *
 * @b: char and it is a constant value
 *
 * @n: peak numbers to add
 *
 * Return: s ptr
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}
