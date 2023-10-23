#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring.
 * @haystack: char that  locates string
 * @needle: ptr indicates the loc
 * Return: ptr
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (i = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
				break;
		}
	if (needle[j - i] == '\0')
		return (haystack + i);
	}
	return (0);
}
