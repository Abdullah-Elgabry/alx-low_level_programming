#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 *
 * @l: string parameter input
 *
 * Return:len of str
*/
int _strlen(char *l)
{
	int c;

	for (c = 0; c < strlen(*l); l++)
		c++;

	return (c);
}
