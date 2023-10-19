#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @c: string input
 *
 * Return: converted str using rot13
*/

char *rot13(char *c)
{
	int st;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = c;

	while (*c)
	{
		for (st = 0; st <= 52; st++)
		{
			if (*s == rot13[st])
			{
				*c = ROT13[st];
				break;
			}
		}
		c++
	}
	return (p);
}
