#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: ptr to a string created or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int uni = 0, unj = 0, siz1 = 0, siz2 = 0;

	while (s1 && s1[siz1])
		siz1++;
	while (s2 && s2[siz2])
		siz2++;

	s = malloc(sizeof(char) * (siz1 + siz2 + 1));
	if (s == NULL)
		return (NULL);

	uni = 0;
	unj = 0;

	if (s1)
	{
		while (uni < siz1)
		{
			s[uni] = s1[uni];
			uni++;
		}
	}

	if (s2)
	{
		while (uni < (siz1 + siz2))
		{
			s[uni] = s2[unj];
			uni++;
			unj++;
		}
	}
	s[uni] = '\0';

	return (s);
}
