#include "main.h"

/**
 * _strcat - this is a function that concatenates two strings
 *
 * @dest: this is a ptr to a destination
 *
 * @src: this is ptr to the source
 *
 * Return: ptr to concatenate char
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i] = src[j];
		i++;
	return (dest);
}
