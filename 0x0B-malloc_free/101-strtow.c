#include <stdlib.h>
#include "main.h"

/**
 * counter - this fun is for counting the number of word
 *
 * @s: str
 *
 * Return: int
 */
int counter(char *s)
{
	int t, c, sen;

	t = 0;
	sen = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			t = 0;
		else if (t == 0)
		{
			t = 1;
			sen++;
		}
	}

	return (sen);
}
/**
 * **strtow -  fun that splits a string into words.
 * @str: str
 *
 * Return: ptr to array of strings OR NULL
 */

char **strtow(char *str)
{
	char **res, *tst;
	int i, ar = 0, siz = 0, wrd_c, c = 0, st, last;

	while (*(str + siz))
		siz++;
	wrd_c = counter(str);
	if (wrd_c == 0)
		return (NULL);

	res = (char **) malloc(sizeof(char *) * (wrd_c + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i <= siz; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				tst = (char *) malloc(sizeof(char) * (c + 1));
				if (tst == NULL)
					return (NULL);
				while (st < last)
					*tst++ = str[st++];
				*tst = '\0';
				res[ar] = tst - c;
				ar++;
				c = 0;
			}
		}
		else if (c++ == 0)
			st = i;
	}

	res[ar] = NULL;

	return (res);
}
