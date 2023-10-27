#include "main.h"

/**
 * _strchr - this is a function that locates a character in a string.
 *
 * @s: search for a char
 *
 * @c: this is the target const
 *
 * Return: ptr[s]
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
