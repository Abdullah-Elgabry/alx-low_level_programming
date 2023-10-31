#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - fun that concatenates all the arguments of your program.
 * @ac: integer that counts the arguments
 * @av: arguments
 * Return: string or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int s, j, c = 0, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
			size++;
	}
	size += ac;

	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
		{
			str[c] = av[s][j];
			c++;
		}
		if (str[c] == '\0')
		{
			str[c++] = '\n';
		}
	}
	return (str);
}
