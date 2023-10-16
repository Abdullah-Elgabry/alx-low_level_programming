#include "main.h"

/**
 * *_strcpy - copies the str pointed to by src, including the  null bytes
 *
 *@src: char input
 *
 *@dest: char input
 *
 * Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[i] != '\0');

	return (dest);
}
