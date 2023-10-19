#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: this is the returned string
 *
 * Return: eccodes string
*/

char *leet(char *s)
{
	char *c = s;
	char to_replace[] = {'A', 'E', 'O', 'T', 'L'};
	int v [] = {4, 1, 0, 7, 3};
	unsigned int check;

	while (*s)
	{
		for (check = 0; check < sizeof(key) / sizeof(char); check++)
		{
			if (*s == key[check] || *s == key[check] + 32)
			{
				*s = 48 + value[check];
			}
		}
		s++;
	}
	return (c);
}
