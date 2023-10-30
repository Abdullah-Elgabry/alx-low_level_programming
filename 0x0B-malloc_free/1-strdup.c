#include <stdlib.h>
#include "main.h"

/**
 * _strdup - fun that returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer to a newly allocated space in memory in Success or NULL
 */


char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (; str[j] != '\0'; j++)
	;

	s = malloc(j * sizeof(*str) + 1);

	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < j; i++)
			s[i] = str[i];
	}
	return (is);
}
