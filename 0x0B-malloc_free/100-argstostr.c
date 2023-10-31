#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - fun that concatenates all the arguments of your program.
 *
 * @ac: integer that counts the arguments
 *
 * @av: arguments
 *
 * Return: string or NULL if failed
 */


char *argstostr(int ac, char **av)
{
	int i, j, c, s;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		s += j + 1;
	}
	str = malloc(s + 1);
	if (str == 0)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[c] = av[i][j];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
