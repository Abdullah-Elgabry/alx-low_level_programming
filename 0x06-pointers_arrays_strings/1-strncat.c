#include "main.h"

/**
 * _strncat - this is a function that concatenates two strings
 *
 * @dest: this is a ptr to a destination
 *
 * @src: this is ptr to the source
 *
 * @n: most n bytes from src
 *
 * Return: destination char
*/

char char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
