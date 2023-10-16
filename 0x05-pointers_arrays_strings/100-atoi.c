#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @c: char input
 *
 * Return: integer
*/

void _atoi(char *c)
{
	unsigned int n = 0;
	int s = 1;

	do {
		if (*c == '-')
		{
			s *= -1;
		}
		else if (*c >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
			break;
	} while (*c++);

	return (n * s);

}
