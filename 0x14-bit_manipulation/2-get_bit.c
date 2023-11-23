#include "main.h"

/**
 * get_bit - this func will returns the value of a bit at a given index.
 *
 * @n: indexed num.
 *
 * @index: given bit
 *
 * Return: bit value
 * otherwise : (-1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
