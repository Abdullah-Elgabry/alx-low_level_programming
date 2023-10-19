#include "main.h"

/**
 * string_toupper - fun that changes lowercase to uppercase.
 *
 * @s: this is the returned string
 *
 * Return: converted char
*/

char *string_toupper(char *s)
{
	int start;

	for (start = 0; s[start] != '\0'; start++)
	{
		if (s[start] >= 97 && s[start] <= 122)
		{
			s[start] = s[start] - 32;
		}
	}
	return (s);
}
