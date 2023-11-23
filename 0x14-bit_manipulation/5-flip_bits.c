#include "main.h"

/**
 * flip_bits - this func will returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: 1st num.
 *
 * @m: 2nd num.
 *
 * Return: num of bits.
 *
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fl = n ^ m;
	unsigned int c = 0;

	while (fl > 0)
	{
		c += fl & 1;
		fl >>= 1;
	}

	return (c);

}
