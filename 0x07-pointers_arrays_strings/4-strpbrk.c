#include "main.h"

/**
 * _strpbrk - this is a fun that searches a string for any of a set of bytes.
 *
 * @accept: checks the  occurance
 *
 * @s: the string that will be checked
 *
 * Return: ethier null or ptr to match byte
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);

}
