#include "hash_tables.h"

/**
 * hash_djb2 - this func will trig the algo
 *
 * @str: # table  str
 *
 * Return: will ret the val of the # table
 *
 */


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
