#include "main.h"

/**
 * _strncpy - this is a fun that copies a string.
 *
 * @dest: this is a ptr to a destination
 *
 * @src: this is ptr to the source
 *
 * @n: size of source char
 *
 * Return: will show the destination char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int cp;

	for (cp = 0; cp < n && src[cp] != '\0'; cp++)
		dest[cp] = src[cp];

	while (cp < n)
	{
		dest[cp] = '\0';
		cp++;
	}
	return (dest);
}
