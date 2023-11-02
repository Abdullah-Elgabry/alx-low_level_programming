#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: 1s tstring
 * @s2: 2nd string
 * @n: bytes
 *
 * Return: ptr to memory.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *o;
	unsigned int str1, str2, p, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (str1 = 0; s1[str1] != '\0'; str1++)
		;

	for (str2 = 0; s2[str2] != '\0'; str2++)
		;

	if (n > str2)
		n = str2;

	p = str1 + n;

	o = malloc(p + 1);

	if (o == NULL)
		return (NULL);

	for (j = 0; j < p; j++)
		if (j < str1)
			o[j] = s1[j];
		else
			o[j] = s2[j - str1];

	o[j] = '\0';

	return (o);
}
