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
	char *chr;
	unsigned int j, siz;

	if (str == NULL)
		return (NULL);

	while (str[siz])
		len++;

	chr = malloc(sizeof(char) * (siz + 1));

	if (chr == NULL)
		return (NULL);

	while ((chr[j] = str[j]) != '\0')
		j++;

	return (chr);
}
