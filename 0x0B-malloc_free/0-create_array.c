#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: this is the size of the array.
 *
 * @c: this char will be the contianer
 *
 * Return: pointer of an array of array init
 */


char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (0);

	while (size--)
		s[size] = c;

	return (s);
}
