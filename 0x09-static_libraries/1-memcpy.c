#include "main.h"

/**
 * _memcpy - this is a fun that copies memory area.
 *
 * @dest: this is a ptr to a memory
 *
 * @src: this is ptr to the source in the memory
 *
 * @n: the size of source that will be coppied
 *
 * Return: ptr to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
