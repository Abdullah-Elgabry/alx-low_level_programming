#include "main.h"

/**
 * _strlen_recursion - this is a fun that returns the length of a string
 *
 * @s: this is a ptr to the str
 *
 * Return: n (int)
*/

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s > '\0')
		n += _strlen_recursion(s + 1);

	return (n);
}
