#include "main.h"

/**
 * binary_to_uint - this func will converts a bin number to unsigned int
 *
 * @b: bin number.
 *
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
