#include "main.h"

/**
 * _strcmp - this is a function that compares two strings.
 *
 * @s1: first input
 *
 * @s2: second input
 *
 * Return:0 or 1
*/

int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			q = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (q);
}
