#include "hash_tables.h"

/**
 * key_index - this func will ret the index of the key
 *
 * @key: the rtx key
 *
 * @size: # table size
 *
 * Return: the key index
 *
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
