#include "main.h"

/**
 * clear_bit - this func will sets the value of a bit to 0(clear)at a given index.
 * @n: indexed num.
 * @index: bit will be set
 *
 * Return: 1 or -1
 *
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
